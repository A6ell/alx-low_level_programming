#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index
 * @head: Pointer to the head node pointer
 * @index: Index of the node to delete
 *
 * Return: 1 if success, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}

while (index > 0 && current != NULL)
{
current = current->next;
index--;
}

if (current == NULL)
return (-1);

current->prev->next = current->next;

if (current->next != NULL)
current->next->prev = current->prev;

free(current);

return (1);
}
