#include "holberton.h"
/**
 * more_numbers - to print numbers from 0 to 14 for 10 times
 */
void more_numbers(void)
{
	int i, con;

	while (con < 10)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		con++;
	}
}
