#include <stdlib.h>
#include <stdio.h>

void *malloc_checked(unsigned int b)
{
    void *p = malloc(b);

    if (p == NULL)
    {
        printf("Error: malloc failed\n");
        exit(98);
    }

    return p;
}
