// pound.c -- Определяет функцию с аргументом.

#include <stdio.h>
void pound(int n);      // Определяет прототип функции согласно стандарту ANSI C.

int main(void) {
    int times = 5;
    char ch = '!';      // ABCII- код равен 33.
    float f = 6.0f;

    pound(times);   // Аргумент типа int.
    pound(ch);      // Эквивалентно pound(int(char)).
    pound(f);       // Эквивалентно pound(int(f)).

    return 0;
}

void pound(int n){
    while(n > 0){
        printf("#");
        n--;
    }
    printf("\n");
}