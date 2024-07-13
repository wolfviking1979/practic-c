//Общий объем продаж.
//Покупатель приобретает в магазине пять товаров. Напишите программу,
//которая запрашивает цену каждого товара и затем выводит накопленную
//стоимость приобретаемых товаров, сумму налога с продаж и итоговую сумму.
//Допустим, что налог с продаж составляет 7%.

#include <stdio.h>

int main(void) {
    printf("Общий объем продаж:\n");
    int count = 1;
    const float TAX = 0.07F;
    double price;
    double total_price = 0;
    double profit_tax;
    while (count <= 5) {
        printf("Введите стоимость %d товара:\n", count);
        scanf("%lf", &price);
        total_price += price;
        count++;
    }

    profit_tax = total_price * TAX;
    printf("Общая стоимость купленных товаров составляет: $%.2lf\n", total_price + profit_tax);
    printf("Налог с продаж составляет: $%.2lf\n", profit_tax);

    return 0;
}