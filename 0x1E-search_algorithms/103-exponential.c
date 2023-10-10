#include "search_algos.h"

/**
* _binary_search - Find a value in a sorted array using binary search.
* @array: A pointer to the first element of the array.
* @left: The starting index of the [sub]array.
* @right: The ending index of the [sub]array.
* @value: The value to search for.
*
* Return: If the value is not present or the array is NULL, return -1.
*         Otherwise, return the index where the value is located.
*
* Description: Displays the [sub]array being examined after each iteration.
*/
int _binary_search(int *array, size_t left, size_t right, int value)
{
size_t mid;

if (array == NULL)
return (-1);

while (left <= right)
{
printf("Searching in array: ");
for (mid = left;  mid < right;  mid++)
printf("%d, ", array[mid]);
printf("%d\n", array[mid]);

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

/**
* exponential_search - Locate a value in a sorted array
* @array: A pointer to the first element of the array.
* @size: The number of elements in the array.
* @value: The value to search for.
*
* Return: If the value is not found or the array is NULL, return -1.
*         Otherwise, return the index where the value is located.
*
* Description: Displays a value each time it is compared in the array.
*/
int exponential_search(int *array, size_t size, int value)
{
size_t bound, i;

if (array == NULL)
return (-1);

bound = 1;
while (bound < size && array[bound] < value)
{
printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
bound *= 2;
}

i = _binary_search(array, bound / 2,
size - 1 < bound ? size - 1 : bound, value);

if (i != -1)
{
printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, i);
return (i);
}

printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound);
return (-1);
}
