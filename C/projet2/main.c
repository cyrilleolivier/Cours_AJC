#include <stdio.h>
#include <stdlib.h>

static void
inverse(char *s)
{
    char *t;

    for (t = s + strlen(s) - 1; s < t; s++, t--) {
        char c = *s;
        *s = *t;
        *t = c;
    }
}


int
main(void)
{
    static char tmp[256];

    if (scanf("%255s", tmp) == 1) {
        inverse(tmp);
        puts(tmp);
    }

    return 0;
}
