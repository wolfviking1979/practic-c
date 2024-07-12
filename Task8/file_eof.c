// Программа открывает файл и отображает его содержимое.

#include <stdio.h>
#include <stdlib.h>         // Для функции exit.

int main(void) {
    int ch;
    FILE * fp;
    char f_name[50];        // Для хранения имени файла.

    printf("Введите имя файла: ");
    scanf("%s", f_name);

    fp = fopen(f_name, "r");        // Открыть файл для чтения.

    if (fp == NULL) {
        printf("Не удается открыть файл. "  // Программа завершена.
               "Программа завершена.\n");
        exit(1);                            // Выйти из программы.
    }

    // Функция getc(fp) получает символ из открытого файла.
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);                             // Закрыть файл.

    return 0;
}