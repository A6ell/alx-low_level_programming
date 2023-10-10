#include <stdio.h>
#include "search_algos.h"

/**
* exponential_search - Searches for a value in a sorted array of integers
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: The index where the value is located.
*/
int exponential_search(int *array, size_t size, int value)
{
size_t bound = 1;
size_t low, high;

if (array == NULL)
return (-1);

while (bound < size && array[bound] < value)
{
printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
bound *= 2;
}

low = bound / 2;
high = (bound < size - 1) ? bound : size - 1;

printf("Value found between indexes [%lu] and [%lu]\n", low, high);
printf("Searching in array: ");

for (size_t i = low;  i <= high;  i++)
{
printf("%d", array[i]);
if (i < high)
printf(", ");
}
printf("\n");

for (;  low <= high;  low++)
{
printf("Value checked array[%lu] = [%d]\n", low, array[low]);
if (array[low] == value)
return (low);
}

return (-1);
}
