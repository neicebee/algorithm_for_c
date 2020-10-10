#include <stdio.h>
int main(void) {
	// 세 값의 최솟값
	int num1, num2, num3;

	printf("num1 값 입력: "); scanf_s("%d", &num1);
	printf("num2 값 입력: "); scanf_s("%d", &num2);
	printf("num3 값 입력: "); scanf_s("%d", &num3);

	int min = num1;

	if (min > num2) min = num2;
	if (min > num3) min = num3;

	printf("최솟값은 %d.", min);

	return 0;
}