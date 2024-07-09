/* Сложить два числа.
 * Формат входных данных:
 * В строке последовательно вводятся два целых числа, которые нужно сложить.
 * Формат выходных данных:
 * Одно число результат сложения двух чисел.*/

#include <stdio.h>

int main(void) {
    int number_1, number_2, result;
    scanf("%d%d", &number_1, &number_2); // Ввод чисел
    result = number_1 + number_2;               // Сложение
    printf("%d\n", result);
    return 0;
}
