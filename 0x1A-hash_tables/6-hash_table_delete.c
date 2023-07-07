#include "hash_tables.h"

/**
* hash_table_delete - Deletes a hash table.
* @ht: The table to delete.
*
* Return: None.
*/
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node = NULL;
hash_node_t *temp = NULL;
unsigned long int i;

for (i = 0;  i < ht->size;  i++)
{
node = ht->array[i];

while (node != NULL)
{
temp = node;

node = node->next;
free(temp->key);
free(temp->value);
free(temp);
}
}
free(ht->array);
free(ht);
}
