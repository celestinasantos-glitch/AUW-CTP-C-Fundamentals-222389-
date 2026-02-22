#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int a = get_int("A: ");
    int b = get_int("B: ");

    if (a > b)
        printf("A is largest\n");
    else if (b > a)
        printf("B is largest\n");
    else
        printf("Equal\n");
}
