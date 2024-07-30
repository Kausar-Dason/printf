/*printf print percent sign*/
#include "main.h"

/**
 * print_percentage - Print % sign
 * @args: argument list
 *
 * Return: Always 1 (number of characters printed)
 */
int print_percentage(__attribute__((unused))va_list args)
{
	_putchar('%');
	return (1);
}
