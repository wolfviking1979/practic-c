#include <stdio.h>

void temperatures(double);

int main(void) {
    double temp_in;
    printf("Введите температуру по Фаренгейту в градусах:");
    scanf("%lf", &temp_in);
    temperatures(temp_in);

    return 0;
}

void temperatures(double temp_Farenheit){
    double temp_Celsius;
    double temp_Kelvin;
    temp_Celsius = (temp_Farenheit - 32) * 5 / 9;
    temp_Kelvin  =  temp_Celsius  +  273.15;
    printf("Температура по Фаренгейту: %.2lf градусов\n", temp_Farenheit);
    printf("Температура по Цельсию: %.2lf градусов\n", temp_Celsius);
    printf("Температура по Кельвину: %.2lf градусов\n", temp_Kelvin);
}
