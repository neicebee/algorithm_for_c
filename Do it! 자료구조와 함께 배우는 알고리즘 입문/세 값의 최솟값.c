#include <stdio.h>
int main(void) {
	// �� ���� �ּڰ�
	int num1, num2, num3;

	printf("num1 �� �Է�: "); scanf_s("%d", &num1);
	printf("num2 �� �Է�: "); scanf_s("%d", &num2);
	printf("num3 �� �Է�: "); scanf_s("%d", &num3);

	int min = num1;

	if (min > num2) min = num2;
	if (min > num3) min = num3;

	printf("�ּڰ��� %d.", min);

	return 0;
}