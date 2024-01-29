#include "main.h"
#include <stdarg.h>
/**
 * _printf - This serve as alternative function for printf.
 * @format: This is the parameter for to be taken by the _printf function.
 * Return: length if success.
 */

int _printf(const char *format, ...)
{
	va_list(ap);
	int length;

	va_start(ap, format);


	while (*format != '\0')
	{
		if (*format != '%' && *format != '\\')
		{
			printchar(*format);
			length++;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				char c = va_arg(ap, int);

				printchar(c);
				length++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(ap, char*);

				while (*str != '\0')
				{
					printchar(*str);
					str++;
					length++;
				}
			}
		}
		format++;
	}
	va_end(ap);
	return (length);
}

