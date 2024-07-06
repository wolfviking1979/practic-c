// Программа возводит числа в целые степени.

#include <stdio.h>
double power(double n, int p); // Прототип функции.

int main(void) {
    double x, x_pow;
    int exp;

    printf("Введите число и положительную целую степень,");
    printf(" в которую\nчисло будет возведено. Для завершения программы");
    printf(" введите q.\n");

    while (scanf("%lf%d", &x, &exp) == 2) {
        x_pow = power(x,  exp);      // Вызов функции.
        printf("%.3g в степени %d равно %.5g\n", x, exp, x_pow);
        printf("Введите следующую пару чисел или q для завершения программы.\n");
    }
    printf("надеемся, что вы оценили это упражнение -- до свидания!\n");
    return 0;
}

double power(double n, int p) {
    double pow = 1;
    int i;

    for (i = 1; i <= p; i++) {
        pow *= n;
    }
    return  pow;
}