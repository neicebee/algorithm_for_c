#include <stdio.h>
#include <string.h>
int main(void) {
	// 사용자가 입력한 값이 몇 자리수인지 출력
	int num, cnt = 0;

	printf("num 값 입력\n>");
	scanf_s("%d", &num);

	while (num != 0) {
		num = num / 10;
		++cnt;
	}

	printf("num의 자릿수는 %d.", cnt);
	return 0;
}