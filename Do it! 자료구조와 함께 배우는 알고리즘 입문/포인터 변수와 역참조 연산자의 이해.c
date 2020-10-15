#include <stdio.h>
int main(void) {
	// 포인터 변수 선언
	int* p;

	// 사용자 입력한 수 저장 변수 선언
	int num;

	printf("수를 입력하세요.:");
	scanf_s("%d", &num);

	// 포인터 변수에 num의 메모리 주소값 저장
	p = &num;

	printf("num의 값 : %d\n", num);
	printf("num의 메모리 값 : %p\n", &num);
	printf("p의 값 : %p\n", p);
	printf("p의 메모리 값 : %p\n", &p);
	printf("역참조 연산자로 메모리 주소에 접근해 값 가져오기 : %d\n", *p);

	// 역참조 연산자로 num의 값을 20으로 바꾸기
	*p = 20;
	printf("역참조 연산자로 메모리 주소에 접근해 값 가져오기 : %d\n", *p);
	printf("바뀐 num값을 확인 : %d\n", num);
	return 0;
}