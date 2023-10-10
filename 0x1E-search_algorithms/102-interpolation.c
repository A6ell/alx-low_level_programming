#include <stdio.h>
#include "search_algos.h"

/**
* interpolation_search - Searches for a value in a sorted array of integers.
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: The index where the value is located.
*/
int interpolation_search(int *array, size_t size, int value)
{
size_t l, m, r;

if (array != NULL && size > 0)
{
l = 0;
r = size - 1;
while (array[l] != array[r] && value >= array[l] && value <= array[r])
{
m = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));

printf("Value checked array[%lu] = [%d]\n", m, array[m]);

if (array[m] < value)
l = m + 1;
else if (array[m] > value)
r = m - 1;
else
return (m);
}

if (array[l] == value)
return (l);
else
printf("Value checked array[%lu] is out of range\n", m);
}
return (-1);
}
