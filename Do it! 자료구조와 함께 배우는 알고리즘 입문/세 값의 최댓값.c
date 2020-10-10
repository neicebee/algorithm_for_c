#include <stdio.h>
int main(void) {
	// 세 값의 최댓값
	int num1, num2, num3;

	printf("num1 값 입력: "); scanf_s("%d", &num1);
	printf("num2 값 입력: "); scanf_s("%d", &num2);
	printf("num3 값 입력: "); scanf_s("%d", &num3);

	int max = num1;

	if (max < num2) max = num2;
	if (max < num3) max = num3;

	printf("최댓값은 %d.", max);

	return 0;
}