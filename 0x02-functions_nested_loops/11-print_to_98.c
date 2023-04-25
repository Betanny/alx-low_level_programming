#include "main.h"
/**
 * print_to_98 - prints numbers to 98
 *
 * @n: number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar(n + '0');	
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			_putchar(n + '0');
			n--;
		}
	}
	_putchar('n');
}
