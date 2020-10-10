#include <stdio.h>
int main(void) {
	// 세 값의 중앙값
	int num1, num2, num3;

	printf("num1 값 입력: "); scanf_s("%d", &num1);
	printf("num2 값 입력: "); scanf_s("%d", &num2);
	printf("num3 값 입력: "); scanf_s("%d", &num3);

	int mid;
	if (num1 >= num2)
		if (num2 >= num3)
			mid = num2;
		else if (num1 <= num3)
			mid = num1;
		else
			mid = num3;
	else if (num1 > num3)
		mid = num1;
	else if (num2 > num3)
		mid = num3;
	else
		mid = num2;

	printf("%d, %d, %d의 중간값은 %d.\n", num1, num2, num3, mid);

	return 0;
}