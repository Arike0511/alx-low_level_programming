#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int a, b, c, length, f, digit;

	a = 0;
	b = 0;
	c = 0;
	length = 0;
	f = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (a < length && f == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}

	if (f == 0)
		return (0);

	return (c);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int output, numb1, numb2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	numb1 = _atoi(argv[1]);
	numb2 = _atoi(argv[2]);
	output = numb1 * numb2;

	printf("%d\n", output);

	return (0);
}
