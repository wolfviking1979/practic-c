#include <stdio.h>

int main(void) {
    char name[40];
    float cash;
    printf("Введите имя семьи: ");
    scanf("%s", name);

    printf("Введите доход семьи: ");
    scanf("%f", &cash);

    printf("Семья %s может стать богаче на $%.2f.\n", name, cash);

    return 0;
}