#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	write(1, "Holberton", 9);
	return (0);
}
