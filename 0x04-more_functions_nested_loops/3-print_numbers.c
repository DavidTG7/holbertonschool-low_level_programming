#include "holberton.h"
/**
 * print_numbers - to print numbers
 *
 * Return: Always 0 succes
 */
void print_numbers(void)
{
	int i;

	for (i = '0' ; i <= 9 ; i++)
	{
		_putchar(i);
	}
	putchar('\n');
	return (0);
}

