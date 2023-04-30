#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t linked list, and returns
*               the head node's data (n).
* @head: A pointer to the head node of the listint_t list.
*
* Return: The head node's data (n).
*
* Description: If the linked list is empty, return 0.
*/
int pop_listint(listint_t **head)
{
listint_t *current;
int n;

if (*head == NULL)
return (0);

current = *head;
n = current->n;
*head = current->next;
free(current);

return (n);
}
