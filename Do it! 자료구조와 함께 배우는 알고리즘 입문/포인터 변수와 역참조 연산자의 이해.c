#include <stdio.h>
int main(void) {
	// ������ ���� ����
	int* p;

	// ����� �Է��� �� ���� ���� ����
	int num;

	printf("���� �Է��ϼ���.:");
	scanf_s("%d", &num);

	// ������ ������ num�� �޸� �ּҰ� ����
	p = &num;

	printf("num�� �� : %d\n", num);
	printf("num�� �޸� �� : %p\n", &num);
	printf("p�� �� : %p\n", p);
	printf("p�� �޸� �� : %p\n", &p);
	printf("������ �����ڷ� �޸� �ּҿ� ������ �� �������� : %d\n", *p);

	// ������ �����ڷ� num�� ���� 20���� �ٲٱ�
	*p = 20;
	printf("������ �����ڷ� �޸� �ּҿ� ������ �� �������� : %d\n", *p);
	printf("�ٲ� num���� Ȯ�� : %d\n", num);
	return 0;
}