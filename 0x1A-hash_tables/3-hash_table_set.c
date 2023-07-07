#include "hash_tables.h"

/**
* hash_table_set - Adds an element to the hash table.
* @ht: The hash table where the element will be added.
* @key: The key of the element.
* @value: The value associated with the key.
*
* Return: 1 for success, 0 for failure.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node;

if (ht == NULL || key == NULL || value == NULL)
{
return (0);
}

index = key_index((unsigned char *)key, ht->size);
new_node = ht->array[index];

while (new_node != NULL)
{
if (strcmp(new_node->key, key) == 0)
{
free(new_node->value);
new_node->value = strdup(value);
return (1);
}
new_node = new_node->next;
}

new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
return (0);
}

new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}

