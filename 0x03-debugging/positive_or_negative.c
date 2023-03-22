#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description:'checking if an integer is positive or negative'
 * Parameters: no input returns an int
 * Return: Always 0 (Success)
 */
void positive_or_negative(int i)
{
        if (i > 0)
        {
                printf("%u is positive\n", i);
        }
        else if (i < 0)
        {
                printf("%i is negative\n", i);
        }
        else
        {
                printf("%u is zero\n", i);
        }
}
