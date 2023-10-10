#include <stdio.h>
#include "search_algos.h"

/**
* advanced_binary_recursive - Searches a sorted array of integers
* @array: Pointer to the first element of the array to search
* @low: Low index of the current subarray
* @high: High index of the current subarray
* @value: Value to search for
*
* Return: The index where the value is located, or -1 if not found.
*/
int advanced_binary_recursive(int *array, size_t low, size_t high, int value)
{
if (low <= high)
{
size_t mid = low + (high - low) / 2;

printf("Searching in array: ");
for (size_t i = low;  i <= high;  i++)
{
printf("%d", array[i]);
if (i < high)
printf(", ");
}
printf("\n");

if (array[mid] == value)
{
if (mid == 0 || array[mid - 1] != value)
return (mid);
else
return (advanced_binary_recursive(array, low, mid, value));
}
else if (array[mid] < value)
{
return (advanced_binary_recursive(array, mid + 1, high, value));
}
else
{
return (advanced_binary_recursive(array, low, mid - 1, value));
}
}
return (-1);
}

/**
* advanced_binary - Searches for a value in a sorted array of integers
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: The index where the value is located.
*/
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL)
return (-1);

return (advanced_binary_recursive(array, 0, size - 1, value));
}
