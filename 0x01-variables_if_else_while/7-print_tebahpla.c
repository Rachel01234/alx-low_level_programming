#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -prints the lowercase alphabet in reverse
 * Description: All your code should be in the main function
 * followed by a new line.
 * Return: 0
 */

int main(void)

{

	char c = 'z';

	while (c >= 'a')

	{
	putchar(c);
	c--;
	}
	putchar('\n');
	return (0);
}
