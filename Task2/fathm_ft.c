// fathm_ft.c - преобразует 2 морских сажени в футы.

#include <stdio.h>

int main(void) {
    int feet, fathoms;

    fathoms = 2;
    feet = 6 * fathoms;
    printf("В %d морских саженях содержится %d футов!\n", fathoms, feet);
    printf("Да, я сказал %d футов!\n", 6 * fathoms);

    return 0;
}
