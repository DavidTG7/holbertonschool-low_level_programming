#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char hol[] = "Holberton";
	int i;

	for (i = 0 ; i <= 8 ; i++)
		putchar(hol[i]);
	putchar('\n');
	return (0);
}
