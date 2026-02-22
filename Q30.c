#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int a = get_int("A: ");
    int b = get_int("B: ");
    int c = get_int("C: ");

    if (a >= b && a >= c)
        printf("A is largest\n");
    else if (b >= a && b >= c)
        printf("B is largest\n");
    else
        printf("C is largest\n");
}
