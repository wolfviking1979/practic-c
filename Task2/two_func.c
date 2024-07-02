/* two_func.c -- Программа, в которой используются две функции
 * в одном файле
 * */
#include <stdio.h>
void butler(void);

int main() {
    printf("Я вызываю дворецкого.\n");
    butler();
    printf("Да. Принесите мне чай и записываемые DVD-диски.\n");
    return 0;
}

void butler(void) { /* Начало определения функции. */
    printf("Вы звонили сэр?\n");
}