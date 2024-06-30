// strings.c -- форматирование строки.

#include <stdio.h>
#define BLURB "Authentic imitation!"

int main(void) {
    printf("/%2s/\n", BLURB);
    printf("/%24s/\n", BLURB);
    printf("/%24.9s/\n", BLURB);
    printf("/%-24.9s/\n", BLURB);

    return 0;
}
