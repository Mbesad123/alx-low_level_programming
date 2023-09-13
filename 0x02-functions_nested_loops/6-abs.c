#include "main.h"

/**
 * _abs - A function to find the absolute value of a number
 * Return: -a or a;
 * @a: function parameter
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);
}
