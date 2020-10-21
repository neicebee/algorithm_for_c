#include <stdio.h>

// 순환 => 함수 안에서 함수 자기 자신을 호출. 재귀 호출, 재귀 함수라고도 함.
int factorial(int num) {
    if (num <= 1) {
        return (1);
    }
    else {
        printf("%d ", num * factorial(num - 1));
        return (num * factorial(num - 1));
    }
}
int main(void) {
    int num1 = factorial(5);
    int num2 = factorial(3);

    printf("%d\n", num1);
    printf("%d\n", num2);

    return 0;
}