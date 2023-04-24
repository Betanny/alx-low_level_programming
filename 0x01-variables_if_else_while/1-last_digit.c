#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 *
 * main - print last digit in random numbers
 * 
 * Descriotion: The program prints the las digit in numbers 
 *
 * return- always return (0) when the program runs successfully
 *
 */

int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else if (last < 6 && last != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
