#include "main.h"

/**
 * print_sign - A function that prints the signs of a number
 * Return: 1 or 0 or -1
 * @n: function parameter
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
