/* Напишите программу, которая запрашивает у пользователя ввод целого числа,
 * а затем выводит все целые числа, начиная с этого числа и заканчивая числом
 * которое, больше введенного значения на 10.
 * Обеспечьте разделение выводимых значений друг от друга пробелами,
 * символами табуляции или новой строки.*/

#include <stdio.h>

int main(void) {
    printf("Введите целое число.\n");
    int num, i;
    scanf("%d", &num);

    i = num;
    while(i < (num + 11)){
        printf("%d ", i);
        i++;
    }
    return 0;
}