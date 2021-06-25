#include "holberton.h"
/**
 * _isdigit - to check for digits
 * @c: for digit
 *
 * Return: 1 for uppercas and 0 if else
 */
int _isupper(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

