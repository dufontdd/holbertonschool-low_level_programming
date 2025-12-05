#include "hash_tables.h"

/**
 * hash_table_set - adds or updates an element in a hash table
 * @ht: the hash table
 * @key: the key (cannot be empty)
 * @value: the associated value (duplicate)
 *
 * Return: 1 if is  OK, 0 if error
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *node, *current;
    char *value_copy;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    current = ht->array[index];

    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            value_copy = strdup(value);
            if (value_copy == NULL)
                return (0);

            free(current->value);
            current->value = value_copy;
            return (1);
        }
        current = current->next;
    }

    node = malloc(sizeof(hash_node_t));
    if (node == NULL)
        return (0);

    node->key = strdup(key);
    if (node->key == NULL)
    {
        free(node);
        return (0);
    }

    node->value = strdup(value);
    if (node->value == NULL)
    {
        free(node->key);
        free(node);
        return (0);
    }

    node->next = ht->array[index];
    ht->array[index] = node;

    return (1);
}
