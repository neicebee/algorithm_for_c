#include <stdio.h>
#include <string.h>
int main(void) {
	// ����ڰ� �Է��� ���� �� �ڸ������� ���
	int num, cnt = 0;

	printf("num �� �Է�\n>");
	scanf_s("%d", &num);

	while (num != 0) {
		num = num / 10;
		++cnt;
	}

	printf("num�� �ڸ����� %d.", cnt);
	return 0;
}