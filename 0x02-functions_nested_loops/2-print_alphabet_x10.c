#include "holberton.h"
/**
 * print_alphabet_x10 - a fuction that prints alphabet 10 times
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
	int abc;
	int cont = 0;

	while (cont <= 10)
	{
		for (abc = 97 ; abc <= 122 ; abc++)
		{
			_putchar(abc);
		}
		cont++;
		_putchar('\n');
	}
}
