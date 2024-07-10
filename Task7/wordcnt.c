// Программа производит подсчет символов, слов, строк.

#include <stdio.h>
#include <ctype.h>    // Для isspace()
#include <stdbool.h>  // Для bool, true и false
#define STOP '|'

int main(void) {
    char c;                // Прочитанный символ.
    char prev;            // Предыдущее символ.
    long n_chars = 0L;    // Количество символов.
    int n_lines = 0;      // Количество строк.
    int n_words = 0;     // Количество слов.
    int p_lines = 0;    // Количество неполных строк.
    bool inWord = false;  // true -- если символ в слове. Иначе false.
    printf("Введите текст для анализа (| для завершения):\n");
    prev = '\n';          // Используется для идентификации полных строк.

    while ((c = getchar()) != STOP) {
        n_chars++;       // Количество символов.
        if (c == '\n') {
            n_lines++;     // Количество строк.
        }

        if (!isspace(c) && !inWord) {
            inWord = true;    // Начало нового слова.
            n_words++;      // Количество слов.
        }

        if(isspace(c) && inWord) {
            inWord = false;    // Конец слова.
        }
        prev = c;      // Сохранить значение символа.
    }

    if (prev != '\n') {
        p_lines++;
    }

    printf("Символов = %ld, слов = %d, строк = %d, ", n_chars, n_words, n_lines);
    printf("неполных строк = %d\n", p_lines);

    return 0;
}