#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: The format string
 *
 * Return: The number of characters printed (excluding the null byte)
 */
int _printf(const char *format, ...)
{
	link_t mappings[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"%", print_percentage},
		{"d", printf_intg},
		{"i", printf_dec},
		{NULL, NULL}
	};

	va_list args;
	int count;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	count = printf_processor(format, mappings, args);
	va_end(args);

	return (count);
}
