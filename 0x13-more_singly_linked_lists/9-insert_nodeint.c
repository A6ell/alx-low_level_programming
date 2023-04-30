/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to the pointer to the head node of the list
* @idx: index of the list where the new node should be added (starting from 0)
* @n: value to be stored in the new node
*
* Return: address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current, *new_node;
unsigned int i;

if (head == NULL)
return (NULL);

if (idx == 0)
return (add_nodeint(head, n));

current = *head;

for (i = 0;  i < idx - 1 && current != NULL;  i++)
current = current->next;

if (current == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = current->next;
current->next = new_node;

return (new_node);
}
