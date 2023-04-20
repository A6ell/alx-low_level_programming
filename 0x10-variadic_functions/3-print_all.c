#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
* print_all - prints anything
* @format: list of types of arguments passed to the function
*/
void print_all(const char * const format, ...)
{
va_list args;
char *s;
int i = 0;
char c;

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
c = va_arg(args, int);
printf("%c", c);
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
printf("(nil)");
else
printf("%s", s);
break;
default:
i++;
continue;
}
if (format[i + 1])
printf(", ");
i++;
}
printf("\n");
va_end(args);
}
