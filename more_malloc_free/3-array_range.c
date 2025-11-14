#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers containing all values
 * from min to max, inclusive
 * @min: minimum value to include in the array
 * @max: maximum value to include in the array
 *
 * Description: Allocates memory for an array of integers containing
 * all values from min to max, in ascending order. If min is greater
 * than max, or if malloc fails, the function returns NULL.
 *
 * Return: pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
    int i, j;
    int *p;
    int size;

    if (min > max)
        return (NULL);

    size = max - min + 1;

    p = malloc(sizeof(int) * size);
    if (p == NULL)
        return (NULL);

    j = 0;
    for (i = min; i <= max; i++)
    {
        p[j] = i;
        j++;
    }

    return (p);
}
