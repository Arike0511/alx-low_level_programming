#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int c;
    int d;

    c = 98;
    d = 42;
    printf("a=%d, b=%d\n", c, d);
    swap_int(&c, &d);
    printf("a=%d, b=%d\n", c, d);
    return (0);
}
