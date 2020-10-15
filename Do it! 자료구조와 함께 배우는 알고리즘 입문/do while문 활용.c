#include <stdio.h>
int main(void) {
	// a와 b의 값을 입력하고 b - a 출력하기 (b >= a)

	int a, b;

	do {
		printf("a 값을 입력하세요.\n>");
		scanf_s("%d", &a);
		printf("b 값을 입력하세요.\n>");
		scanf_s("%d", &b);
	} while (b < a);

	printf("%d - %d = %d\n", b, a, b - a);
	return 0;
}