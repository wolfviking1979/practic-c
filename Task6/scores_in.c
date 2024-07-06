/* Программа демонстрирует использование циклов для обработки массивов. */

#include <stdio.h>
#define SIZE 10             // Размер массива
#define PAR 72

int main(void) {
    int index, score[SIZE];
    int sum = 0;            // Сумма
    float average=0;         // Среднее

    printf("Введите %d результатов игры в гольф:\n", SIZE);
    for (index = 0; index < SIZE; index++) {
        scanf("%d", &score[index]);
    }

    printf("Введены следующие результаты:\n");
    for (index = 0; index < SIZE; index++) {
        printf("%5d", score[index]);    // Проверка введенной информации.
    }
    printf("\n");

    for (index = 0; index < SIZE; index++) {
        sum += score[index];              // Сумма
    }
    average = (float) sum / SIZE;        // Среднее

    printf("Сумма результатов = %d, среднее значение = %.2f\n", sum, average);
    printf("Полученный гандикап равен %.0f\n", average - PAR);
    return 0;
}