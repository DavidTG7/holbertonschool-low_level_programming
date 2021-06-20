#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int num;
	int abc;

	for (num = 48 ; num <= 57 ; num++)
	{
		putchar(num);
	}
	for (abc = 97 ; abc <= 102 ; abc++)
	{
		putchar(abc);
	}
	putchar('\n');
	return (0);
}
