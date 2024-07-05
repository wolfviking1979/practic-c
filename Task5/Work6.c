/* Написать программу, которая вычисляет квадраты целых чисел
 * используя цикл while.*/

#include <stdio.h>

int main(void) {
    int i_num = 1;          /* Счетчик */
    int square;             /* Квадрат числа */
    while(i_num <= 10)  {
        square  =  i_num  *  i_num;
        printf("Квадрат числа %d = %d\n", i_num, square);
        i_num++;
    }

    return 0;
}