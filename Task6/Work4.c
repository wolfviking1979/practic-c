#include <stdio.h>

int main(void) {
    const int SIZE = 7;
    char ch = 'A';

    for (int i = 1; i < SIZE; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}