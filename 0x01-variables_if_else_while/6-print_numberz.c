#include <stdio.h>
/**
 * main - A program that prints all single digit number of base 10
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
