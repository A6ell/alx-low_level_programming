#include <unistd.h>
/**
 * main - Entry point of the program
 * Description:'using printf'
 * Parameters:no input returns an int
 * Return: Always 0 (success)
 */

int main(void)
{
	const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, msg, sizeof(msg) - 1);

	return (1);
}
