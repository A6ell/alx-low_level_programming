/*
 * This function takes an array of integers and reverses its contents in place.
 * It uses two pointers to swap the first and last elements
 * reverse_array - function to reverse
 * @param a: pointer to the first element of the array
 * @param n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n/2; i++)
	{
		temp = *(a+i);
			*(a+i) = *(a+n-i-1);
		*(a+n-i-1) = temp;
    }
}
