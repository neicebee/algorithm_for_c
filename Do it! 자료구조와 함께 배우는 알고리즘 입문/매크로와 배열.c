#include <stdio.h>

// ��ũ�� ����
#define ARR_SIZE 5

// ��ũ�� ���� => #undef ��ũ�� �̸�

int main(void) {
	// �迭�� ��ũ��

	int a[ARR_SIZE];

	for (int i = 0; i < ARR_SIZE; i++) {
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
	
	puts("�� ����� ��");
	for (int i = 0; i < ARR_SIZE; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}

	return 0;
}