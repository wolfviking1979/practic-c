#include <stdio.h>
#define MAX_BOTTLES 100

int main(void) {
    int count = MAX_BOTTLES + 1;
    while(--count > 0) {
        printf("%d бутылок родниковой воды на полке,"
               "%d бутылок родниковой воды!\n", count, count);
        printf("Возьмите одну из них и пустите по кругу,\n");
        printf("%d бутылок родниковой воды!\n\n", count - 1);
    }
    return 0;
}