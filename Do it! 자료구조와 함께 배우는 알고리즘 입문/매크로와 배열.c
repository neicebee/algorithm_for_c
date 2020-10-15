#include <stdio.h>

// 매크로 정의
#define ARR_SIZE 5

// 매크로 해제 => #undef 매크로 이름

int main(void) {
	// 배열과 매크로

	int a[ARR_SIZE];

	for (int i = 0; i < ARR_SIZE; i++) {
		printf("a[%d] = ", i);
		scanf_s("%d", &a[i]);
	}
	
	puts("각 요소의 값");
	for (int i = 0; i < ARR_SIZE; i++) {
		printf("a[%d] = %d\n", i, a[i]);
	}

	return 0;
}