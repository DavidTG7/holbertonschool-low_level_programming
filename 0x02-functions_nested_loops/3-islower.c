#include "holberton.h"
/**
 * _islower - int _islower(int c) to print islower
 * @c: _islower
 * Return: 1 if c is lowercase, return 0 else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
