#include <stdio.h>
int main(void) {
	// a�� b�� ���� �Է��ϰ� b - a ����ϱ� (b >= a)

	int a, b;

	do {
		printf("a ���� �Է��ϼ���.\n>");
		scanf_s("%d", &a);
		printf("b ���� �Է��ϼ���.\n>");
		scanf_s("%d", &b);
	} while (b < a);

	printf("%d - %d = %d\n", b, a, b - a);
	return 0;
}