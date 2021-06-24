#include "holberton.h"
/**
 * _isupper - to check fo uppercase
 * @c: for uppercase
 *
 * Return: 1 for uppercas and 0 if else
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

