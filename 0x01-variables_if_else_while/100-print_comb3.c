#include <stdio.h>

/**
 * main - prints all possible combinations of two digits
 * description - Numbers must be separated by ,
 * The two digits must be different
 * Return: Always 0 (Success)
 */

int main(void)
{
int a = 0;

	int b = 0;

	int coma = 1;

	while (a <= 9)
	{
	while (b <= 9)
	{
	if (a < b)
	{
	if (coma == 0)
	{
	putchar(',');
	putchar(32);
	}
	coma = 0;
	putchar(a + '0');
	putchar(b + '0');
	}
	++b;
	}
	++a;
	b = 0;
	}
	putchar(10);
	return (0);
}
