#include "lists.h"
#include <stdlib.h>

/**
* free_listint_safe - frees a listint_t list
*
* @h: double pointer to the head of the list
*
* Return: the size of the list that was freed
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *tmp, *loop;

if (!h || !(*h))
return (0);

loop = *h;
while (loop)
{
count++;
tmp = loop;
loop = loop->next;
free(tmp);
if (tmp <= loop)
break;
}
*h = NULL;

return (count);
}
