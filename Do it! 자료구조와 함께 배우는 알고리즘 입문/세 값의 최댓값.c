#include <stdio.h>
int main(void) {
	// �� ���� �ִ�
	int num1, num2, num3;

	printf("num1 �� �Է�: "); scanf_s("%d", &num1);
	printf("num2 �� �Է�: "); scanf_s("%d", &num2);
	printf("num3 �� �Է�: "); scanf_s("%d", &num3);

	int max = num1;

	if (max < num2) max = num2;
	if (max < num3) max = num3;

	printf("�ִ��� %d.", max);

	return 0;
}