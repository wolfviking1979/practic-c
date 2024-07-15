// Эта программа получает от пользователя количество баллов
// и показывает соответствующий буквенный уровень знаний.

#include <stdio.h>
// Именованные константы представляющие пороги уровней.
#define A_SCORE 90
#define B_SCORE 80
#define C_SCORE 70
#define D_SCORE 60


int main(void) {
    int score;
    // Получить от пользователя баллы за контрольную работу.
    printf("Введите свои баллы:\n");
    scanf("%d", &score);

    if (score >= A_SCORE) {
        printf("Ваш уровень - А");
    } else if (score >= B_SCORE) {
        printf("Ваш уровень - B");
    } else if (score >= C_SCORE) {
        printf("Ваш уровень - C");
    } else if (score >= D_SCORE) {
        printf("Ваш уровень - D");
    } else {
        printf("Ваш уровень - F");
    }

    return 0;
}