#include "main.h"

/**
 * _isalpha - a function that checks aphabets character
 * @c: parameter to be checked
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
