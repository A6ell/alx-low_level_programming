#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node - adds a new node at the beginning of a list_t list
* @head: pointer to the head of the list
* @str: string to be added to the new node
*
* Return: address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

/* allocate memory for new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

/* duplicate string and assign to new node */
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

/* set new node's next to current head and update head */
new_node->next = *head;
*head = new_node;

return (new_node);
}
