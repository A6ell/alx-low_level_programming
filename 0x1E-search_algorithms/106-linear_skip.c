#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
* linear_skip - Searches for a value in a sorted skip list of integers
* @list: Pointer to the head of the skip list to search in
* @value: Value to search for
*
* Return: A pointer to the first node where value is located.
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *current, *express;

if (list == NULL)
return (NULL);

express = list->express;
current = list;

while (express != NULL)
{
printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
if (express->n >= value)
break;

current = express;
express = express->express;
}

if (express == NULL)
{
current = current->express;
while (current->next != NULL)
current = current->next;
}

printf("Value found between indexes [%lu] and [%lu]\n",
current->index, express->index);

while (current != NULL)
{
printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
if (current->n == value)
return (current);
if (current->n > value)
return (NULL);
current = current->next;
}

return (NULL);
}
