// использование переменной типа boolean.

#include <stdio.h>

int main(void) {
    long num;
    long sum = 0L;
    _Bool inputIsGood;
    printf("Введите целочисленное число для последующего суммирования ");
    printf("(или q для завершения программы): ");
    inputIsGood = (scanf("%ld", &num) == 1);
    while(inputIsGood){
        sum += num;
        printf("Введите следующее число (или q для завершения программы): ");
        inputIsGood  =  (scanf("%ld",  &num)  ==  1);
    }
    printf("Сумма введенных целых чисел равна %ld.\n", sum);
    return 0;
}