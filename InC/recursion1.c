#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print50();

int main()
{
    print50();

    return 0;
}

void print50()
{
    static int n = 1;
    printf("%d ", n);
    n++;

    if (n == 51)
    {
    }
    else
    {
        print50();
    }
}