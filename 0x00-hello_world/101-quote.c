#include <unistd.h>
/**
 * main - Entry point of the program
 * Description:'using const char'
 * Parameters:no input returns an int
 * Return: Always 0 (success)
 */

int main(void)
{
	const char msg[] = "art is useful\" - Dora Korpar, 2015-10-19\n";

	ssize_t len = sizeof(msg);

	write(STDERR_FILENO, msg, len);

	return (1);
}
