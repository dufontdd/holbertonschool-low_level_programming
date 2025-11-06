#include "main.h"

/**
 * _pow_recursion - calcule x à la puissance y
 * @x: base
 * @y: exposant
 *
 * Return: pow 0 ou -1 si y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1;);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
{
