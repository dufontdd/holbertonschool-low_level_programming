#include "hash_tables.h"

/**
 * hash_table_get - récupère la valeur associée à une clé
 * @ht: la table de hachage
 * @key: la clé recherchée
 *
 * Return: la valeur associée, ou NULL si non trouvée
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *node;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);
    node = ht->array[index];

    while (node != NULL)
    {
        if (strcmp(node->key, key) == 0)
            return (node->value);

        node = node->next;
    }

    return (NULL);
}
