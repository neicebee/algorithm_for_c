#include <stdio.h>
int main(void) {
	// 1���� n������ ���� �� ���ϱ�
	int n, for_sum = 0, while_sum = 0;

	printf("n�� ��: "); scanf_s("%d", &n);
	
	// for��
	for(int i = 1; i <= n; i++) {
		for_sum += i;
	}

	// while��
	int i = 1;
	while (i <= n) {
		while_sum += i;
		i++;
	}

	printf("1���� %d������ ����\nfor : %d\nwhile : %d\n", n, for_sum, while_sum);
	return 0;
}