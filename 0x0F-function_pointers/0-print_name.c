#include <stddef.h>
/**
 * print_name - prints a name in a specific format.
 * @name: name of the person
 * @f: pointer to a function that takes a char pointer and returns void
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
