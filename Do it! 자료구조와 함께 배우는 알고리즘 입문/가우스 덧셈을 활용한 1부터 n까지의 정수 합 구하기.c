#include <stdio.h>
int main(void) {
	// 1���� n������ �� (���콺 ���� Ȱ��)
	// ���콺 ���� : 1���� 10������ ���� (1+10)*5�� ���� ������� ���� �� �ִ�.
	int num, sum = 0;

	printf("n�� ���� �Է��ϼ���.\n>");
	scanf_s("%d", &num);

	int gauss_num = num - (num % 10);
	int mod_sum = gauss_num + (num % 10);

	int gauss_sum = (1 + gauss_num) * (gauss_num / 2);

	for (int i = gauss_num+1; i <= mod_sum; i++) {
		sum += i;
	}

	printf("���콺 ������ Ȱ���� 1���� %d������ ���� %d�Դϴ�.\n", num, sum + gauss_sum);
	return 0;
}