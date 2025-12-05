#include "hash_tables.h"

/**
 * hash_table_set - ajoute ou met à jour un élément dans la table
 * @ht: table de hachage
 * @key: clé (non vide)
 * @value: valeur (doit être dupliquée)
 *
 * Return: 1 si succès, 0 sinon
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *new_node;
	char *dup_value;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			dup_value = strdup(value);
			if (dup_value == NULL)
				return (0);

			free(node->value);
			node->value = dup_value;
			return (1);
		}
		node = node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
