#include <stdio.h>

/**
 * main - The program that prints lowercase except q and e
 * Return: 0 (Success)
 */

int main(void)
{
	char alp[24] = "abcdfghijklmnoprstuvwxyz";
	int a;

	for (a = 0; a < 24; a++)
	{
		putchar(alp[a]);
	}
	putchar('\n');
	return (0);
}
