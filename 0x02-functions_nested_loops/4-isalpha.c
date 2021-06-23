#include "holberton.h"
/**
 * _isalpha - int _isalpha(int c) to print islower
 * @c: _isalpha
 * Return: 1 if c is lowercase, return 0 else
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
