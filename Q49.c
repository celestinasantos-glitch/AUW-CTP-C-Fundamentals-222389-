#include <stdio.h>

int max(int a, int b);

int main(void)
{
    int x = 12;
    int y = 20;

    int maximum = max(x, y);
    printf("Maximum: %d\n", maximum);
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
