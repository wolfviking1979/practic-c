/* running.c -- Программа для физически активной части человека
 * Эта программа преобразует время пробега дистанции в метрической системе.*/

#include <stdio.h>
const int S_PER_MIN= 60;     // Количество секунд в минуте
const int S_PER_HOUR= 3600;  // Количество секунд в часе
const double M_PER_K = 0.62137; // Количество миль в километре

int main(void) {
    double dist_k, dist_m;   // Дистанция пробега в километрах и милях.
    double rate;            // Средняя скорость в милях в час.
    int min, sec;           // Время пробега в минутах и секундах.
    int time;               // Время пробега только в секундах.
    double mtime;           // Время пробега одной мили в секундах.
    int m_min, m_sec;       // Время пробега одной мили в минутах и секундах.

    printf("Эта программа преобразует время пробега дистанции в метрической системе\n");
    printf("во время пробега одной мили и вычисляет вашу среднюю\n");
    printf("скорость в милях в час.\n");
    printf("Введите дистанцию пробега в километрах.\n");
    scanf("%lf", &dist_k);  // 1f типа double.
    printf("Введите время в минутах и секундах.\n");
    printf("Начните с ввода минут.\n");
    scanf("%d", &min);
    printf("Теперь введите секунды.\n");
    scanf("%d",  &sec);

    // Переводит время в секунды.
    time = S_PER_MIN * min + sec;

    // Переводит километры в мили.
    dist_m = M_PER_K * dist_k;

    // Умножение миль в секунду на количество секунд в часе дает количество миль в час.
    rate = dist_m / time * S_PER_HOUR;

    // Деление времени на расстояние дает время пробега одной мили.
    mtime = (double) time / dist_m;

    m_min = (int) mtime / S_PER_MIN;  // Вычисление полного количества минут.

    m_sec = (int) mtime % S_PER_MIN;  // Вычисление остатка в секундах.

    printf("Вы пробежали %1.2f км (%1.2f мили) за %d мин, %d сек.\n",
           dist_k, dist_m, min, sec);
    printf("Такая скорость соответствует пробегу одной мили за %d мин,", m_min);
    printf("%d сек.\nВаша средняя скорость составила %1.2f миль в секунду.\n",
           m_sec, rate);

    return 0;
}