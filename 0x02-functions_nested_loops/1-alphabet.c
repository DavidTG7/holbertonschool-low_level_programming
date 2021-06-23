#include "holberton.h"
/**
 * print_alphabet - a fuction that prints alphabet
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	int abc;

	for (abc = 97 ; abc <= 122 ; abc++)
		_putchar(abc);
	_putchar('\n');
	return (0);
}
