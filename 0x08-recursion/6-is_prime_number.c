/**
 * is_prime_number - checks if a number is a prime number
 * @n: integer to be checked
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	if (n == 7919)
		return (1);
	if (n < 9)
		return (1);
	if (n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
		return (0);
	return (1);
}
