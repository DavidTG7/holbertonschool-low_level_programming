#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int num;

	for (num = 48 ; num <= 57 ; num++)
	{
		if (num >= 48 && num <= 56)
		{
			putchar(num);
			putchar(num == 57 ? ' ' : ',');
			putchar(num != 57 ? ' ' : ' ');
		}
	}
	putchar(num);
	return (0);
}
