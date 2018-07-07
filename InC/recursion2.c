#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int printsum(int n);

int main()
{
    int sum = printsum(5);
    printf("%d", sum);
    return 0;
}

int printsum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return (n + printsum(n - 1));
}