#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - Prints anything
* @format: List of types of arguments passed to the function
* c: char
* i: integer
* f: float
* s: char * (if the string is NULL, print (nil) instead)
* any other char should be ignored
*
* Return: void
*/
void print_all(const char * const format, ...)
{
va_list args;
char *s;
int i = 0, flag = 0;

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
s = va_arg(args, char *);
if (s == NULL)
s = "(nil)";
printf("%s", s);
break;
default:
flag = 1;
break;
}
if (format[i + 1] && !flag)
printf(", ");
i++;
flag = 0;
}
printf("\n");
va_end(args);
}
