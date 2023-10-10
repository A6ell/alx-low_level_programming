#include <stdio.h>
#include "search_algos.h"

/**
* binary_search - Searches for a value in a sorted array of integers.
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: The index where the value is located.
*/
int binary_search(int *array, size_t size, int value)
{
size_t left = 0, right = size - 1, mid;

if (array == NULL)
return (-1);

while (left <= right)
{
printf("Searching in array: ");
for (mid = left;  mid <= right;  mid++)
{
if (mid == right)
printf("%d", array[mid]);
else
printf("%d, ", array[mid]);
}
printf("\n");

mid = left + (right - left) / 2;

if (array[mid] == value)
return (mid);

if (array[mid] < value)
left = mid + 1;
else
right = mid - 1;
}

return (-1);
}
