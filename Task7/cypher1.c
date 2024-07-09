/*Программа вносит изменения во входные данные, сохраняя пробелы.*/

#include <stdio.h>
#define SPACE ' '

int main(void) {
    char ch;
    ch = getchar();             // читаем символ.
    while (ch != '\n') {        // Пока не встретится конец строки.
        if (ch == SPACE) {      // Оставить пробел не тронутым.
            putchar(ch);     // Символ не меняется.
        } else {
            putchar(ch + 1); // Изменить другие символы.
        }
        ch = getchar();     // Читаем следующий символ.
    }
    putchar(ch);            // Вывести символ с новой строки.

    return 0;
}