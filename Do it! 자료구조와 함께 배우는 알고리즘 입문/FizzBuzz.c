#include <stdio.h>

int main(void) {
	// FizzBuzz
	/*1에서 100까지 출력
	3의 배수는 Fizz 출력
	5의 배수는 Buzz 출력
	3과 5의 공배수는 FizzBuzz 출력*/

	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0) printf("FizzBuzz ");
		else if (i % 3 == 0) printf("Fizz ");
		else if (i % 5 == 0) printf("Buzz ");
		else printf("%d ", i);

		if (i % 10 == 0) printf("\n");
	}

	printf("\n");

	for (int i = 0; i++ < 100;) {
		printf(i % 3 ? i % 5 ? "%d " : "Buzz " : i % 5 ? "Fizz " : "FizzBuzz ", i);
		if (i % 10 == 0) printf("\n");
	}

	return 0;
}