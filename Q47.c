#include <cs50.h>
#include <stdio.h>

int add(int a, int b);

int main(void)
{
    int x = 5;
    int y = 7;

    int sum = add(x, y);
    printf("Sum: %d\n", sum);
}

int add(int a, int b)
{
    return a + b;
}
