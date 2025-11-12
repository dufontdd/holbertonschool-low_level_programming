/**
 * create_array - Crée un tableau de caractères et l'initialise avec un char
 * @size: taille du tableau à allouer
 * @c: caractère d'initialisation
 *
 * Return: pointeur vers le tableau, ou NULL si size = 0 ou en cas d'échec
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (size == 0)
		return (NULL);

	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		buffer[i] = c;

	return (buffer);
}
