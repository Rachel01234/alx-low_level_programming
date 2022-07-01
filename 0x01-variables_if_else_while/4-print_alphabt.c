#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */

int main(void)

{
	char c = 'a';

	while (c <= 'z')

	{
	if (c != 'e' && c != 'q')
	{
	putchar(c);
	}
	c++;
	}
	putchar('\n');
	return (0);
}
