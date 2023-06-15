#include "lists.h"
#include <stdlib.h>
/**
* sum_dlistint - Returns the sum of all the data (n) of a doubly linked list.
* @head: Pointer to the head of the list.
*
* Return: Sum of the data values, or 0 if the list is empty.
*
* Description:the function returns 0.
*/

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}
