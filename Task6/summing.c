/* summing.c -- Программа суммирует целые числа, вводимые в интерактивном режиме*/

#include <stdio.h>

int main(void) {
    long num;
    long sum = 0L;      /* Инициализация переменной sum нулем. */
    int status;
    printf("Введите целое число для последующего суммирования: ");
    status = scanf("%ld", &num);
    while (status == 1) {
        sum += num;
        printf("введите следующее число (или q для завершения программы): ");
        status  = scanf("%ld",  &num);
    }
    printf("Сумма введенных целых чисел равна: %ld.\n", sum);
    return 0;
}