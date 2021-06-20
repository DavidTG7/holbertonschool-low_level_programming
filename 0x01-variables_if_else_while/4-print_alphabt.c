#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int abc;

	for (abc = 97 ; abc <= 122 ; abc++)
	{
		if (abc != 101 && abc != 113)
			putchar(abc);
	}
	putchar('\n');
	return (0);
}
