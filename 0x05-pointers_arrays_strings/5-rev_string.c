#include "main.h"
/**
 * rev_string - reverse
 * @s: The string
 */

void rev_string(char *s)
{
	int length = 0;
	char *start = s;
	char *end = s;
	char tmp;

	while (*end != '\0')
	{
		length++;
		end++;
	}
	end--;
	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
