#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <Windows.h>

/*
test1 : 구조체 배열을 이용하여 학생 정보를 입력하여 저장한 후, 특정 조건에 부합하는 학생들만 출력하는 프로그램
test2 : 랜덤하게 31자의 문자열을 생성한 후 오름차순 혹은 내림차순으로 정렬하고 정렬함수의 실행 시간을 체크하는 프로그램
*/

// test1 ========================================================
// 학생들의 정보를 저장할 구조체
typedef struct {
	char name[10]; // 10개의 배열을 가진 char 자료형
	int score;
	float grades;
}STUDENT;

// 학생 정보를 입력받아 구조체에 저장하는 함수
STUDENT* inputStudents() {
	static STUDENT students[5]; // 정적인 STUDENT 구조체의 배열

	printf("이름, 학점, 영어점수를 입력하세요.\n");

	for (int i = 0; i < 5; i++) {
		printf("%d-th 학생:\n", i + 1);
		scanf_s("%s", students[i].name, 10); // scanf 함수와 다르게 scanf_s 함수는 입력값의 길이 제한 값을 인자로 받는다.
		scanf_s("%f", &students[i].grades);
		scanf_s("%d", &students[i].score);
	}

	return students;
}

// 특정 조건을 입력한 후 조건에 맞는 학생 찾아 출력하는 함수
void findStudents(STUDENT* students) {
	int score;
	float grades;

	bool ext = false; // 특정 조건에 부합하는 학생이 있는지 없는지 판단하는 bool 자료형
	// * 추가설명 : C언어에서의 true, false는 각각 0이 아닌 숫자, 0으로 판단한다. 이러한 특징으로 bool을 정의한 헤더파일 <stdbool.h>를 추가하여 사용한다.

	printf("영어점수와 학점을 입력하세요.\n");
	scanf_s("%d %f", &score, &grades); // 띄어쓰기를 기준으로 각각 다른 변수에 담는다.

	printf("Followings are elites:\n");

	for (int i = 0; i < 5; i++) {
		if (students[i].score >= score && students[i].grades >= grades) {
			printf("%s, %f, %d\n", students[i].name, students[i].grades, students[i].score);
			ext = true;
		}
	}

	if (ext == false) {
		printf("X\n");
	}
}

void test1() {
	STUDENT* students = inputStudents();
	findStudents(students);
}
// ==============================================================

// test2 ========================================================
// 30개의 31자리 랜덤 문자열 생성 함수
char* genString() {
	static char str[30][32];

	srand((unsigned)time(NULL));

	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 32; j++) {
			if (j == 31) {
				str[i][j] = '\0';
				continue;
			}
			// a~z => 97~122
			str[i][j] = (char)(rand() % (122 - 97 + 1) + 97);
		}
	}

	return str;
}

// 인자로 받은 2차원 문자열 배열을 출력하는 함수
void printString(char* str) {
	// 반환받은 str 2차원 배열을 가리키기 위한 배열 포인터 선언
	// str[0]의 배열 주소를 저장
	char(*p)[32] = (char(*)[32])str;

	printf("[Before executing Sorting]\n");

	for (int i = 0; i < 30; i++) {
		// i는 1당 32바이트
		// p에 저장되어있는 str[0]의 주소가 0x0092b1a8이라면 i가 1일때, *(p+i)는 0x0092b1c8이 된다. 즉, 이 주소는 str[1]의 주소값이다.
		printf("%02d :%s\n", i+1, *(p + i));
	}
}

// 인자로 받은 2차원 문자열 배열을 dir 인자의 값에 따라 오름차순, 내림차순으로 출력하는 함수
void insertionSort(char* str, char dir) {
	// LARGE_INTEGER : 헤더파일에 선언되어 있는 구조체
	LARGE_INTEGER Frequency;
	LARGE_INTEGER Begintime;
	LARGE_INTEGER Endtime;

	/*
	QueryPerformanceFrequency / QueryPerformanceCounter => <Windows.h>를 추가하여 사용할 수 있는 함수
	Performance Counter : OS나 어플리케이션, 서비스, 드라이브가 잘 실행되고 있는지를 나타내는 정보에 사용되는 카운터
	*/
	QueryPerformanceFrequency(&Frequency); // => Performance Counter의 주파수 포인터 반환 함수 (CPU 주파수에 따른 초당 진행되는 틱수를 나타내는데 변동이 없다)
	QueryPerformanceCounter(&Begintime); // => Performance Counter의 값 포인터 반환 함수

	// 오름차순 정렬 배열과 내림차순 정렬 배열
	char ascending[30][32] = { "" };
	char descending[30][32] = { "" };

	// 반환받은 str 2차원 배열을 가리키기 위한 배열 포인터 선언
	char(*p)[32] = (char(*)[32])str;

	// 포인터로 역참조한 랜덤 문자열의 맨 앞 문자부터 순서를 계산해 오름차순 배열과 내림차순 배열에 각각 저장하는 반복문 (문자가 같을 때도 고려해 삼중 for문으로 구현)
	int cnt = 0;
	for (int i = 0; i < 30; i++) {
		for (int j = 0; j < 30; j++) {
			for (int k = 0; k < 32; k++) {
				if ((*(p + i))[k] > (*(p + j))[k]) {
					cnt++;
					break;
				}
				else if ((*(p + i))[k] < (*(p + j))[k]) {
					break;
				}
			}
		}
		strcpy_s(ascending[cnt], 32, *(p + i));
		strcpy_s(descending[29 - cnt], 32, *(p + i));
		cnt = 0;
	}

	// 함수 호출 시 인자로 받은 dir 인자가 A일 때 오름차순 정렬 출력
	if (dir == 'A') {
		printf("\n[After executing Sorting with Ascending]\n");
		for (int i = 0; i < 30; i++) {
			printf("%02d :%s\n", i + 1, ascending[i]);
		}
		printf("\n[The time to use the 'Ascending' insertionSort function.]\n");
	}

	// 함수 호출 시 인자로 받은 dir 인자가 D일 때 내림차순 정렬 출력
	if (dir == 'D') {
		printf("\n[After executing Sorting with Descending]\n");
		for (int i = 0; i < 30; i++) {
			printf("%02d :%s\n", i + 1, descending[i]);
		}
		printf("\n[The time to use the 'Descending' insertionSort function.]\n");
	}

	QueryPerformanceCounter(&Endtime);

	// __int64는 64비트 정수 자료형이다.
	__int64 elapsed = Endtime.QuadPart - Begintime.QuadPart; // => 두 Counter의 차이를 주파수 값으로 나눠주면 속도 측정이 가능함
	double duringtime = (double)elapsed / (double)Frequency.QuadPart;
	
	printf("elapsed time with insertionSort: %f\n", duringtime);
}

void test2() {
	char* str = genString();
	printString(str);
	insertionSort(str, 'A');
}
// ==============================================================

// main =========================================================
int main(void) {
	test2();
}
// ==============================================================
