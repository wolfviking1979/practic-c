#include <stdio.h>
float get_diff(float a, float b);
float get_div(float a, float b);

int main(void) {
    float num_a, num_b, diff, divide;
    printf("Введите два числа через пробел: ");
    while (scanf("%f%f", &num_a, &num_b) == 2) {
        diff = get_diff(num_a,  num_b);
        divide = get_div(num_a,  num_b);
        printf("Разница: %.2f\n",  diff);
        printf("Деление:  %.2f\n",  divide);
        printf(" Введите новые числа через пробел\n");
        printf("или нажмите кнопку 'q' для выхода\n");
    }

    return 0;
}

float get_diff(float a, float b)  {
    return a - b;
}

float get_div(float a, float b)   {
    return a / b;
}