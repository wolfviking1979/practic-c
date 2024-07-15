//Расход бензина в расчете на километры пройденного пути.
//Расход бензина в расчете
//на километры пройденного автомобилем пути можно вычислить на основе формулы:
//расход = пройденные километры / расход бензина в литрах.
//Напишите программу, которая запрашивает у пользователя число пройденных километров
// и расход бензина в литрах. Она должна рассчитать расход бензина автомобилем
//и показать результат.

#include <stdio.h>

int main(void) {
    int km;                  //количество километров
    float fuel;             //расход бензина в литрах
    float fuel_avg;       //расход автомобиля в литрах

    printf("Введите число пройденных километров:\n");
    scanf("%d", &km); //вводим число пройденных километров.
    printf("Введите расход бензина в литрах:\n");
    scanf("%f", &fuel); //вводим расход бензина в литрах.

    fuel_avg = fuel * 100 / km; //вычисляем расход автомобиля в литрах.
    printf("Средний расход автомобиля в литрах: %.2f l/100 км.\n", fuel_avg);


    return 0;
}