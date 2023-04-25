#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: number
 *
 * Return: mod (last digit)
 */
int print_last_digit(int n)
{
	int mod;

	mod = n % 10;
	if (n < 0)
	{
		mod = mod * -1;
	}
	_putchar(mod + '0');
	return (mod);
}
