#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 **/
void print_alphabet_x10(void)
{
	int num = 0;
	int letter = 'a';

	while (num < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
		num++;
	}
}
