#include "main.h"

/**
 * _isdigit - function that checks for digit
 * @c: function parameter
 * Return: 1 r 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
