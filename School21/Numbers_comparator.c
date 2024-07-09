/*Сравнить два числа.
 * Формат входных данных:
 * В строке последовательно вводятся два целых числа, которые нужно сравнить.
 * Формат выходных данных:
 * Необходимо вывести
 * 1 - первое число больше второго.
 * 2 - второе число больше первого.
 * 3 - числа равны.*/

#include <stdio.h>

int main(void ) {
    int number_1, number_2, result;
    scanf("%d%d", &number_1, &number_2);
    if (number_1 > number_2) {
        result = 1;
    } else if (number_2 > number_1) {
        result = 2;
    } else {
        result = 0;
    }
    printf("%d\n", result);
    return 0;
}
