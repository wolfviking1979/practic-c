/* Напишите программу для вывода таблицы, в каждой строке которой представлено
 * целое число, его квадрат и его куб.
 * Запросите у пользователя верхний и нижний пределы таблицы.
 * Используйте цикл for.*/

#include <stdio.h>

int main(void) {
    int lower, upper;
    printf("Введите верхний предел таблицы: ");
    scanf("%d", &lower);
    printf("Введите нижний предел таблицы:  ");
    scanf("%d",  &upper);
    printf("Число \tКвадрат\t  Куб\n");

    for (int i = lower; i <= upper; i++) {
        printf("%5d\t%5d\t%5d\n", i, i * i, i * i * i);
    }
    return 0;
}