/**
* array_range - creates an array of integers from min to max
* @min: the minimum value to include in the array
* @max: the maximum value to include in the array
*
* Return: returns a pointer
*
*/
#include <stdlib.h>

int *array_range(int min, int max)
{
int *arr;
int size, i;

if (min > max)
return (NULL);

size = max - min + 1;
arr = malloc(size *sizeof(int));
if (!arr)
return (NULL);

for (i = 0;   i < size;   i++)
arr[i] = min + i;

return (arr);
}
