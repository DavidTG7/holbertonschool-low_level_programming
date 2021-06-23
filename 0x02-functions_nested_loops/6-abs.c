#include "holberton.h"
/**
 * _abs - computes the absolute value of an integer
 * @int: for integers
 *
 * Return: Always 0 (Succes)
 */
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else
	{
		r = r * -1;
		return (r);
	}
}

