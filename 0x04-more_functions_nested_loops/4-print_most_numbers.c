#include "main.h"

/**
 * print_most_numbers - entry point
 * Description: Prints the numbers with _putchar
 * Return: void
*/

void print_most_numbers(void)

{
	int num = 0;

	while (num < 10)
	{
	if (num != 2 && num != 4)
	_putchar('0' + num);
	num++;
	}
	_putchar('\n');
}
