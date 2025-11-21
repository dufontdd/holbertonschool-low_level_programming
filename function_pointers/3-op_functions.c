#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects correct operation
 * @s: operator
 *
 * Return: pointer to needed function, or NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	if (ops[i].op == NULL)
		return (NULL);

	return (ops[i].f);
}
