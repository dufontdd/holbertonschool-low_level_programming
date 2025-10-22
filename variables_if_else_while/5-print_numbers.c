#include <stdio.h>

/**
 * main - print all single digit number of 10 sarting from 0
 * followed by a new line
 *
 * Return: Always 0 (succuess)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	    putchar(n + '0');

	putchar('\n');

	return (0);
}
