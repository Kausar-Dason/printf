#include "main.h"

/**
 * printf_processor - Processes the format string
 *		and prints the corresponding output
 * @format: The format string containing the format specifiers
 * @args: The list of arguments to be formatted and printed
 * @mappings: An array list of possible functions
 *
 * Return: The total number of characters printed
 */
int printf_processor(const char *format, link_t mappings[], va_list args)
{
	int i, j, count = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;

			for (j = 0; mappings[j].specifier != NULL; j++)
			{
				if (format[i] == mappings[j].specifier[0])
				{
					count += mappings[j].func_ptr(args);
					break;
				}
			}
			if (mappings[j].specifier == NULL)
			{
				_putchar(format[i]);
				count += 1;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	return (count);
}
