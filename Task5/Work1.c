/* Напишите программу, которая преобразует время в минутах в часы и минуты.
 * Для значения 60 создайте символьную константу.
 * Используйте цикл while, что бы обеспечить пользователю возможность
 * повторного ввода значение и для прекращения цикла, если вводится значение
 * времени, меньшее или равное нулю.*/

#include <stdio.h>
const int min = 60;


int main(void) {
    int hour, minute;
    printf("Перевод минуты в часы!\n");
    printf("Введите количество минут (<= 0 для выхода):\n");
    scanf("%d", &minute);

    while(minute > 0) {
        hour =  minute / min;
        minute  %= min;
        printf("Часы: %d\n", hour);
        printf("Минуты: %d\n", minute);
        printf("Введите количество минут (<= 0 для выхода):\n");
        scanf("%d", &minute);
    }
    printf("Выход\n");
    return 0;
}
