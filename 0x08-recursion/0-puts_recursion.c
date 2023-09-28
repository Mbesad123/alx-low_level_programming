# include "main.h"

/**
 * _puts_recursion - functiong that prints a string
 * @s: parameter
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\n')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
