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
size_t l, r, jump;
int val;

if (array != NULL && size > 0)
{
jump = sqrt(size);
l = 0;
r = jump;
val = array[l];
printf("Value checked array[%lu] = [%d]\n", l, val);
while (r < size && val < value)
{
if (array[r] >= value)
break;
l += jump;
r += jump;
val = array[l];
printf("Value checked array[%lu] = [%d]\n", l, val);
}
if (l >= size || val > value)
return (-1);
printf("Value found between indexes [%lu] and [%lu]\n", l, r);
while (l <= (size - 1) && val <= value)
{
val = array[l];
printf("Value checked array[%lu] = [%d]\n", l, val);
if (val == value)
return (l);
l++;
}
}
return (-1);
}
