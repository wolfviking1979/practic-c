/* Эта программа вычисляет деление по модулю. */
#include <stdio.h>

int main(void) {
    int num1, num2, result;
    printf("Введите целое число,\n");
    printf("которое будет служить вторым операндом: ");
    scanf("%d", &num2);
    printf("Теперь введите первый операнд: ");
    scanf("%d",  &num1);

    while (num1 > 0)  {
        printf("%d %% %d равно %d\n", num1, num2, (num1 % num2) );
        printf("Введите следующее число для первого операнда"
               "(<= 0 для выхода из программы): ");
        scanf("%d",  &num1);

    }
    printf("Деление выполнено.\n");
    return 0;
}