#include <stdio.h>

// 순환 => 함수 안에서 함수 자기 자신을 호출. 재귀 호출, 재귀 함수라고도 함.
double recursion_pow(double x, int n) {
    if (n == 0) return 1;
    else if (n % 2 == 0) return (recursion_pow(x * x, n / 2));
    else return (x * recursion_pow(x * x, (n - 1) / 2));
}
int main(void) {
    double num1 = recursion_pow(4, 1);
    double num2 = recursion_pow(2, 10);

    printf("%0.f\n", num1);
    printf("%0.f\n", num2);

    return 0;
}