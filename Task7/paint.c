// Программа демонстрирует использование тернарного оператора.

#include <stdio.h>
#define COVERAGE 350         // Число квадратных фунтов на одну банку краски.

int main(void) {
    int sq_feet;            // Количество фунтов на одну банку.
    int cans;

    printf("Введите количество квадратных фунтов, которые необходимо покрасить:\n");
    while (scanf("%d", &sq_feet) == 1) {
        cans = sq_feet / COVERAGE;
        cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
        printf("Для этого потребуется %d %s краски.\n", cans,
               cans == 1 ? "банка" : "банки");
    }

    return 0;
}