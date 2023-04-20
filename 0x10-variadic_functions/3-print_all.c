#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	va_list args;
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
	printf("%f", (float)va_arg(args, double));
	break;
	case 's':
	s = va_arg(args, char *);
	printf("%s", s ? s : "(nil)");
	break;
	default:
	break;
	}
	if (format[i + 1])
	printf(", ");
	i++;
	}

	va_end(args);
	printf("\n");
}
