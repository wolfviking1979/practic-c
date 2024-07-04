/* Программа находит сумму первых двадцати чисел.*/

#include <stdio.h>

int main(void) {
    int sum = 0;
    int count = 0;

    while(count <= 20) {
        sum += count;
        count++;
    }
    printf("Сумма чисел = %d\n", sum);
    return 0;
}