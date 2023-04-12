/**
* malloc_checked - Returns a pointer to the allocated memory
* @b: size
* Return: p
*/
#include <stdlib.h>
#include <stdio.h>
void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
if (p == NULL)
exit(98);

return (p);
free(p);
}
