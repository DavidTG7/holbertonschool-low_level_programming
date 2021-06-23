#include "holberton.h"
/**
 * print_sign - function to print the sign of n
 * @n: int print_sign
 *
 * Return: 1 if n is greater than 0 and 0 if n is 0 or less.
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
		putchar('-');
		return (-1);
}
