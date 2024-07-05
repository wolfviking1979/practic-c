/* Написать программу, которая вычисляет сумму чисел.
 *
 * */
#include <stdio.h>

int main(void) {
    int sum = 0;
    int days = 1;
    int i_num = 1;
    printf("Введите количество дней:\n");
    scanf("%d", &days);

    while(i_num <= days) {
        sum ++;
        printf("%d день: $%d\n", i_num, sum);
        i_num ++;
    }
    return 0;
}