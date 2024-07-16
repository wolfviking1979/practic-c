//Римские цифры.
//Напишите программу, которая предлагает пользователю ввести число
//в диапазоне от 1 до 10. Программа должна показать для этого числа римскую цифру.
//Если число находится вне диапазона 1-10, то программа должна вывести сообщение об
//ошибке. В табл. 3.8 приведены римские цифры для чисел от 1 до 10.

#include <stdio.h>

int main(void) {
    int number;
    printf("Введите число от 1 до 10:\n");
    scanf("%d", &number);
    printf("Число Римская цифра\n");
    switch(number) {

        case 1:
            printf("%5d\t\tI", number);
            break;
        case 2:
            printf("%5d\t\tII", number);
            break;
        case 3:
            printf("%5d\t\tIII", number);
            break;
        case 4:
            printf("%5d\t\tIV", number);
            break;
        case 5:
            printf("%5d\t\tV", number);
            break;
        case 6:
            printf("%5d\t\tVI", number);
            break;
        case 7:
            printf("%5d\t\tVII", number);
            break;
        case 8:
            printf("%5d\t\tVIII", number);
            break;
        case 9:
            printf("%5d\t\tIX", number);
            break;
        case 10:
            printf("%5d\t\tX", number);
            break;
        default:
            printf("Ошибка! Вы ввели некорректное число");
    }

    return 0;
}