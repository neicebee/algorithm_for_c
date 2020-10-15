#include <stdio.h>
int main(void) {
	// 1부터 n까지의 합 (가우스 덧셈 활용)
	// 가우스 덧셈 : 1부터 10까지의 합은 (1+10)*5와 같은 방법으로 구할 수 있다.
	int num, sum = 0;

	printf("n의 값을 입력하세요.\n>");
	scanf_s("%d", &num);

	int gauss_num = num - (num % 10);
	int mod_sum = gauss_num + (num % 10);

	int gauss_sum = (1 + gauss_num) * (gauss_num / 2);

	for (int i = gauss_num+1; i <= mod_sum; i++) {
		sum += i;
	}

	printf("가우스 덧셈을 활용한 1부터 %d까지의 합은 %d입니다.\n", num, sum + gauss_sum);
	return 0;
}