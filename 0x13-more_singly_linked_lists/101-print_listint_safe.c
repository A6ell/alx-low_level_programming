#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list.
*
* @head: A pointer to the head of the listint_t list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current;
size_t count = 0;

if (head == NULL)
{
printf("Error: NULL parameter passed.\n");
exit(98);
}

current = head;
while (current != NULL)
{
printf("[%p] %d\n", (void *) current, current->n);
count++;
current = current->next;
if (current >= head && current != NULL)
{
printf("-> [%p] %d\n", (void *) current, current->n);
exit(98);
}
}

return (count);
}
