#include <stdio.h>
int main(void) {
	// 1부터 n까지의 정수 합 구하기
	int n, for_sum = 0, while_sum = 0;

	printf("n의 값: "); scanf_s("%d", &n);
	
	// for문
	for(int i = 1; i <= n; i++) {
		for_sum += i;
	}

	// while문
	int i = 1;
	while (i <= n) {
		while_sum += i;
		i++;
	}

	printf("1부터 %d까지의 합은\nfor : %d\nwhile : %d\n", n, for_sum, while_sum);
	return 0;
}