#include <stdio.h>

int main() {
    double a, b, c;

    printf("Введите три вещественных числа: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    printf("Числа, принадлежащие интервалу (-1, 1): ");

    if (a > -1 && a < 1)
        printf("%.2f ", a);
    if (b > -1 && b < 1)
        printf("%.2f ", b);
    if (c > -1 && c < 1)
        printf("%.2f ", c);

    printf("\n");
    return 0;
}