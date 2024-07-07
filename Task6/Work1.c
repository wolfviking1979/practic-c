/* Напишите программу, которая создает массив из 26 элементов и помещает
 * в него 26 строчных букв английского алфавита.
 * Так же предусмотрите вывод содержимого массива на экран.*/

#include <stdio.h>

int main(void) {
    const int SIZE = 26;
    int index = 0;
    char words[SIZE];

    for (char ch = 'A'; ch <= 'Z'; ch++) {
        words[index] = ch;
        index++;
    }

    for (index = 0; index < SIZE; index++) {
        printf("%c ", words[index]);
    }

    return 0;
}