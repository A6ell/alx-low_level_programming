/**
 * _atoi - convert a string to an integer.
 * @s: the string to convert.
 *
 * Return: the integer value of the string, or 0 if the string does not
 *         contain any valid integers.
 */
int _atoi(char *s)
{
	int sign = 1, result = 0;

	char c;

	while (*s)
	{
		c = *s++;
		if (c == '-')
		{
			sign = -sign;
		}
		else if (c == '+')
		{
			sign = +sign;
		}
		else if (c >= '0' && c <= '9')
		{
			result = result * 10 + (c - '0');
		}
		else if (result > 0)
		{
			break;
		}
	}
	return (sign * result);
}
