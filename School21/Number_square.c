/* По данному натуральному числу N распечатайте все квадраты натуральных чисел
 * не превосходящие N в порядке возрастания.*/

#include <stdio.h>

int main(void) {
    int number;
    int result = 0;
    printf("Введите число: ");
    scanf("%d", &number);

    for (int i = 1; result < number - 1; i++) {
        result = i * i;
        printf("%d ", result);
    }
    return 0;
}