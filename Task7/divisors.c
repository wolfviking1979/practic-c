// Программа отображает делители числа.

#include <stdio.h>
#include <stdbool.h>

int main(void) {
    unsigned long num;          // Проверяемое число.
    unsigned long div;          // Делимое.
    bool isPrime;               // Является ли число простым.
    printf("Введите целое число для анализа: ");
    printf("для завершения введите q.\n");
    while(scanf("%lu", &num) == 1) {
        for (div = 2, isPrime = true; (div * div) <= num; div++) {
            if (num % div == 0) {
                if ((div * div) != num) {
                    printf("%lu делится на %lu и %lu\n", num, div, num / div);
                } else {
                    printf("%lu делится на %lu\n", num, div); // Если число равно 1, то не выводится.
                    isPrime = false;                                 // Если число не является простым,
                                                                    // то выводится его делитель.
                }
            }
        }
        if (isPrime) {
            printf("%lu - простое число.\n", num); // Если число является простым, то выводится его делитель.
        }
        printf("Введите следующее число для проверки: ");
        printf("Для завершения введите q.\n");
    }
    printf("До свидания.\n");
    return 0;
}


