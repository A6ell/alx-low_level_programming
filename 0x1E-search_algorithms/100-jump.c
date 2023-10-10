#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
* jump_search - Searches for a value in a sorted array of integers
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: The index where the value is located.
*/
int jump_search(int *array, size_t size, int value)
{
size_t step = sqrt(size);
size_t prev = 0;

if (array == NULL)
return (-1);

printf("Value checked array[0] = [%d]\n", array[0]);

while (array[prev] < value)
{
size_t next = prev + step;

if (next >= size)
next = size - 1;

printf("Value checked array[%lu] = [%d]\n", next, array[next]);

if (array[next] >= value)
break;

prev += step;
}

printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + step);

for (;  prev < size && array[prev] <= value;  prev++)
{
printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
if (array[prev] == value)
return (prev);
}

return (-1);
}
