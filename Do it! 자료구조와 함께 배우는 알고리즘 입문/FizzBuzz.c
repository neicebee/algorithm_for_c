#include <stdio.h>

int main(void) {
	// FizzBuzz
	/*1���� 100���� ���
	3�� ����� Fizz ���
	5�� ����� Buzz ���
	3�� 5�� ������� FizzBuzz ���*/

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