/* charcode.c -- Отображает кодовое представление символа */

#include <stdio.h>

int main() {
    char ch;
    printf("Введите какой-нибудь символ: ");
    scanf("%c", &ch);
    printf("Код символа: %c равен %d\n", ch, ch);
    return 0;
}