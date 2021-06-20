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
		puchar(num);
	}
	for (abc = 97 ; abc <= 101 ; abc++)
	{
		putchar(abc);
	}
	putchar('\n');
	return (0);
}
