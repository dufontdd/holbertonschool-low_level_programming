#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int i, j;
	char *op;
	int (*f)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(av[1]);
	op = av[2];
	j = atoi(av[3]);

	f = get_op_func(op);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && j == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(i, j));

	return (0);
}
