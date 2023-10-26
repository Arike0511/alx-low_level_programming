#include <stdio.h>
/**
 * main - This program pribnts alphabet in lowercase
 * Return: always 0 (Success)
 */

int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";

	int counter;

	for (counter = 0; counter < 26; counter++)
	{
		putchar(alphabets[counter]);
	}
	putchar('\n');
	return (0);
}
