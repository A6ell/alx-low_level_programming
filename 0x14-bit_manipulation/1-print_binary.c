#include <stdio.h>
#include "main.h"

/**
* print_binary - Prints the binary representation of a number.
* @n: The number to print in binary.
*/
void print_binary(unsigned long int n)
{
unsigned long int mask;
mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
/* Handle the base case of n being 0 */
if (n == 0)
{
putchar('0');
return;
}

/* Find the highest bit that is set to 1 */

while ((mask & n) == 0)
{
mask >>= 1;
}

/* Print the binary representation of n */
while (mask != 0)
{
putchar((n & mask) ? '1' : '0');
mask >>= 1;
}
}
