#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int numb, j, output;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	numb = atoi(argv[1]);
	output = 0;

	if (numb < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && numb >= 0; j++)
	{
		while (numb >= coins[j])
		{
			output++;
			numb -= coins[j];
		}
	}

	printf("%d\n", output);
	return (0);
}
