//Пройденное расстояние.
//Допустим, что несчастные случаи или задержки отсутствуют, тогда расстояние,
//проезжаемое автомобилем по автостраде, можно вычислить на основе формулы:
//расстояние = скорость х время.
//Автомобиль движется со скоростью 70 км/ч. Напишите программу, которая показывает:
//•расстояние, которое автомобиль пройдет за 6 часов;
//•расстояние, которое автомобиль пройдет за 10 часов;
//•расстояние, которое автомобиль пройдет за 15 часов.

#include <stdio.h>

int main(void) {
    printf("Пройденное расстояние автомобиля");

    int speed, distance, time;

    printf("Введите скорость и время в пути:\n");
    scanf("%d%d", &speed, &time);

    distance = speed * time;
    printf("Расстояние пройденное автомобилем за: %d час.\nсо скоростью: %d km/h\n"
           "составляет: %d km.\n", time, speed, distance);

    return 0;
}