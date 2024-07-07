#include <stdio.h>

int main(void) {
    char ch = 'F';
    const int SIZE = 6;

    for (int i = 1; i <= SIZE; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", ch - j);
        }
        printf("\n");
    }
    return 0;
}