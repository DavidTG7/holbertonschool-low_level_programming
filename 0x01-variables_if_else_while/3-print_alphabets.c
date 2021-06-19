#include <stdio.h>
/**
 * main - Entry pint
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	int abc;
	int ABC;

	for (abc = 97 ; abc <= 122 ; abc++)
	{
		putchar(abc);
	}
	for (ABC = 65 ; ABC <= 90 ; ABC++)
	{
		putchar(ABC);
	}
	putchar('\n');
	return (0);
}
