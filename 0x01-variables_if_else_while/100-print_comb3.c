#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Alwasy 0 (Succes)
 */
int main(void)
{
	int uni = '0';
	int dec = '0';

	while (uni <= '9')
	{	
		while (dec <='9');
		{
			if (!(uni > dec || uni == dec))
			{
				putchar(uni);
				putchar(dec);
				if (uni == '8' && dec = '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			dec++
		}
		dec = 'o';
		uni++;
	}
	return (0);
}
	
