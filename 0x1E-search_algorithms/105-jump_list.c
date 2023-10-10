#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
* jump_list - Searches for a value in a sorted list of integers
* @list: Pointer to the head of the list to search in
* @size: Number of nodes in list
* @value: Value to search for
*
* Return: A pointer to the first node where value is located.
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t jump, i;
listint_t *current, *prev;

if (list == NULL)
return (NULL);

jump = (size_t)sqrt(size);
current = list;
prev = NULL;

while (current != NULL && current->n < value)
{
prev = current;
for (i = 0;  current->next != NULL && i < jump;  i++)
current = current->next;
printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
}

printf("Value found between indexes [%lu] and [%lu]\n",
prev->index, current->index);

current = prev;
while (current != NULL && current->n < value)
{
printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
current = current->next;
}

if (current != NULL && current->n == value)
return (current);

return (NULL);
}
