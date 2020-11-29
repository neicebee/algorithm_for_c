#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 사람들 수와 키를 랜덤으로 입력받아 키의 최댓값과 최솟값, 합, 평균을 구하는 프로그램 */

const char* name[10] = { "김철수", "박민수", "김혜지", "사유라", "김영희", "박철수", "김길동", "소유지", "남기리", "심길동" };

int max_height(const int height[], int people) {
	int max = height[0];

	for (int i = 0; i < people; i++) {
		if (height[i] > max) {
			max = height[i];
		}
	}

	return max;
}

int min_height(const int height[], int people) {
	int min = height[0];

	for (int i = 0; i < people; i++) {
		if (height[i] < min) {
			min = height[i];
		}
	}

	return min;
}

int sum_height(const int height[], int people) {
	int sum = 0;

	for (int i = 0; i < people; i++) {
		sum += height[i];
	}

	return sum;
}

double avg_height(int sum, int people) {
	double avg = (double)sum / people;
	printf("%.2f\n", avg);

	return avg;
}

int main(void) {
	unsigned people;

	srand((unsigned)time(NULL));

	people = rand() % 10 + 1;
	
	int* height = calloc(people, sizeof(int));

	const char* use_name[10];

	for (int i = 0; i < people; i++) {
		int rand_height = rand() % 41 + 150;

		printf("%s : %d\n", name[i], rand_height);
		height[i] = rand_height;
	}

	printf("%d명의 사람 중 제일 큰 키는 %dcm 입니다.\n", people, max_height(height, people));
	printf("%d명의 사람 중 제일 작은 키는 %dcm 입니다.\n", people, min_height(height, people));
	
	int sum = sum_height(height, people);
	printf("%d명의 키 합은 %dcm 입니다.\n", people, sum);
	printf("%d명의 키 평균은 %.2fcm 입니다.\n", people, avg_height(sum, people));
}