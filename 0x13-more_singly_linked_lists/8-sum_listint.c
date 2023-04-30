#include "lists.h"

/**
* sum_listint - sums all the data (n) of a listint_t linked list
* @head: head of the list
* Return: sum of all the data (n) or 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *node = head;

while (node)
{
sum += node->n;
node = node->next;
}

return (sum);
}
