/* Написать программу, которая запрашивает ввод числа типа double
 * и выводит значение этого числа на экран.
 * Для этого используйте собственную функцию.*/

#include <stdio.h>

void cube(double);      // Прототип функции.

int main(void) {
    double number;
    printf("Введите число: ");
    scanf("%lf", &number);  // Ввод числа.
    cube(number);               // Вызов функции.
    return 0;
}

// Создание функции.
void cube(double x) {
    printf("%.1lf\n", x * x * x);
}