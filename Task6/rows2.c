// Применение зависимых вложенных циклов.

#include <stdio.h>

int main(void) {
    const int ROWS = 6;
    const int CHARS = 6;
    int rows;               // Количество строк.
    int ch;                 // Счётчик строк.

    for (rows = 0; rows < ROWS; rows++ ) {
        for (ch = ('A' + rows); ch < ('A' + CHARS); ch++) {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}