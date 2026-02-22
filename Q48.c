#include <cs50.h>
#include <stdio.h>

void check_even_odd(int number);

int main(void)
{
    int n = 10;
    check_even_odd(n);
}

void check_even_odd(int number)
{
    if (number % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }
}
