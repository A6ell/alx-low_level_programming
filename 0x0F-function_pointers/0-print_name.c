#include "function_pointers.h"
/**
* print_name - Entry
* Description: 'print name'
*
* @name: char input
* @f: function input
* Return: nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
