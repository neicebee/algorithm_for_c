#include <stdio.h>

#define MAX(a,b) (((a) > (b)) ? (a) : (b))
#define MAX_DEGREE 101

// 다항식의 덧셈

// 구조체
typedef struct {
    int degree; // 다항식의 차수
    float coef[MAX_DEGREE]; // 다항식의 계수
}polynomial;

// C = A + B
polynomial poly_add1(polynomial A, polynomial B) {
    polynomial C;
    int Aindex = 0, Bindex = 0, Cindex = 0;
    int degree_a = A.degree;
    int degree_b = B.degree;
    C.degree = MAX(A.degree, B.degree);

    while (Aindex <= A.degree && Bindex <= B.degree) {
        if (degree_a > degree_b) {
            C.coef[Cindex++] = A.coef[Aindex++];
            degree_a--;
        }
        else if (degree_a == degree_b) {
        C.coef[Cindex++] = A.coef[Aindex++] + B.coef[Bindex++];
        degree_a--; degree_b--;
        }
        else {
        C.coef[Cindex++] = B.coef[Bindex++];
        degree_b--;
        }
        }
        return C;

}
int main(void) {
    polynomial a = { 5, {10, 0, 0, 0, 6, 3} };
    polynomial b = { 4, {7, 0, 5, 0, 1} };
    polynomial c;

    c = poly_add1(a, b);

    printf("c : %d / %0.f, %0.f, %0.f, %0.f, %0.f, %0.f\n", c.degree, c.coef[0], c.coef[1], c.coef[2], c.coef[3], c.coef[4], c.coef[5]);
    return 0;
}