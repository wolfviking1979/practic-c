/* Программа меняет входные данные, оставляя неизменными символы,
 * которые не являются буквами.*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            putchar(ch + 1);            /* Выделяем 1 байт */
        } else {
            putchar(ch);
        }
    }
    putchar(ch);
    return 0;
}
