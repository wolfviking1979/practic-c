// min_sec.c -- Переводит секунды в минуты и секунды.
#include <stdio.h>
#define SEC_PER_MIN 60

int main(void) {
    int sec, min, left;

    printf("Перевод секунд в минуты и секунды!\n");
    printf("Введите количество секунд: (<= 0 для выхода): \n");
    scanf("%d", &sec);

    while(sec > 0){
        min = sec / SEC_PER_MIN;
        left = sec % SEC_PER_MIN;
        printf("%d секунд - это %d минут(ы) %d секунд(ы)\n",sec, min, left);
        printf("Введите введите следующее значение (<= 0 для выхода): \n");
        scanf("%d", &sec);
    }
    printf("Готово!\n");
    return 0;
}