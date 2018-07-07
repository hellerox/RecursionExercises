#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *reverse(char *string);
char *reverses(char *string);
char *reverse3(char *p);

int main()
{
    char *carlos = "Hello, World!";
    printf("reverse %s", reverse3(carlos));

    return 0;
}

char *reverse(char *string)
{
    char *rev;
    rev = malloc(6);
    for (int i = 0; i <= strlen(string); i++)
    {
        rev[i] = string[strlen(string) - i - 1];
    }

    return rev;
}

char *reverses(char *Str)
{
    static int i = 0;
    static char RevStr[10];

    if (*Str != '\0')
    {
        reverses(Str + 1);
        // *RevStr[i++] = *Str;
    }
    return RevStr;
}

char *reverse3(char *p)
{
    char *q = p;
    while (q && *q)
        ++q;
    for (--q; p < q; ++p, --q)
    {
        *p = *p ^ *q,
        *q = *p ^ *q,
        *p = *p ^ *q;
    }
    return q;
}