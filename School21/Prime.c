/* Эта программа вычисляет простое число или составное.*/

#include <stdio.h>

void prime(int num); // Прототип функции

int main(void) {
    int num;
    printf("Введите число: ");
    scanf("%d", &num);
    prime(num);
    return 0;
}

void prime(int num) {
    if (num < 2) {
        printf("%d - Составное число\n", num);
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                printf("%d - Составное число\n", num);
                return;
            }
        }
        printf("%d - простое число\n", num);
    }
}
