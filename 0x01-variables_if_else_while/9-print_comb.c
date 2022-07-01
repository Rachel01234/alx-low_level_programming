#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */

int main(void)

{

int x = '0';

	while (x <= '9')
	{
	putchar(x);
	if (x != '9')
	{
	putchar(',');
	putchar(' ');
	}
	x++;
	}
	putchar(10);
	return (0);
}
