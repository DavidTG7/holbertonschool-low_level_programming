#include <stdio.h>
#include <unistd.h>
#include <holberton.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char hol[] : "Holberton";
	int i;

	for (i = 0 ; i <= 9 ; i++)
		_putchar(hol[i]);
	_putchar('\n');
	return (0);
}
