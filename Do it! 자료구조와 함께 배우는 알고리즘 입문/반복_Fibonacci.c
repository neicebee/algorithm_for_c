#include <stdio.h>

// �Ǻ���ġ ���� - �ݺ�
int fibonacci(int n) {
    if (n < 2) return n;

    int fib_1 = 0, fib_2 = 1, fib_3 = 0;

    for (int i = 2; i <= n; i++) {
        fib_1 = fib_3 + fib_2;
        fib_3 = fib_2;
        fib_2 = fib_1;
    }

    return fib_1;
}
int main(void) {
    int fib_num = fibonacci(6);

    printf("%d\n", fib_num);

    return 0;
}