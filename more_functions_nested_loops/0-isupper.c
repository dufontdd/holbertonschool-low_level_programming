#include "main.h"
#include <stdio.h>

/**
 * main - print a fonction shows upscales letter
 *
 * Return: Always 0.
 */
int _supper(int c)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _insupper(c));
	c = 'a';
	printf("%c: %d\n", c, _insupper(c));
	return (0);
}
