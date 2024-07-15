//Налог с продаж.
//Напишите программу, которая попросит пользователя ввести величину
//покупки. Затем программа должна вычислить федеральный и региональный налоги
//с продаж. Допустим, что федеральный налог с продаж составляет 5%, а региональный —
//2.5%. Программа должна показать сумму покупки, федеральный налог с продаж,
// региональный налог с продаж, общий налог с продаж и общую сумму продажи
// (т. е. сумму покупки и общего налога с продаж).
//Подсказка, для представления 2.5% используйте значение 0.025,
// для представления 5% — 0.05.

#include <stdio.h>

int main() {
    float const FED_TAX = 0.05;     //Федеральный налог с продаж
    float const REC_TAX = 0.025;     //Региональный налог с продаж
    float total_cost = 0;           //Сумма покупки
    float total_fed_tax;     //Сумма федерального налога с продаж
    float total_rec_tax;     //Сумма регионального налога с продаж

    printf("Введите сумму покупки:\n");
    scanf("%f", &total_cost);

    total_fed_tax = total_cost * FED_TAX;         // Вычисление федерального налога с продаж
    total_rec_tax = total_cost * REC_TAX;        // Вычисление регионального налога с продаж

    printf("Федеральный налог с продаж: $%.2f\n", total_fed_tax);
    printf("Региональный налог с продаж: $%.2f\n", total_rec_tax);
    printf("Полная сумма покупки: $%.2f\n", total_cost + total_fed_tax + total_rec_tax);

    return 0;
}