#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function
 * combinations of two
 * two-digit numbers
 * Return: Always 0 (Success)
*/

int main(void)

{

	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	if (last_digit == 0)
	printf("Last digit of %d is %d and is 0\n", n, last_digit);
	if (last_digit < 6 && last_digit != 0)
	printf("Last digit of %d is %d and less than 6 and not 0\n", n, last_digit);
	return (0);
}
