#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that al natural numbers form n to 98
 * @n: parameter
 * Return:
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98 ; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (; n <= 98 ; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (; n >= 98 ; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
		printf("\n");
	}
	else if (n == 98)
		printf("%d\n", n);
}
