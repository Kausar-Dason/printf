/*printf char*/
#include "main.h"

/**
 *printf_char - Prints a char
 *@val: Arguments of type va_list
 *
 *Return: Number of characters printed (1 for a single char)
 */
int printf_char(va_list val)
{
	char c;

	c = (char) va_arg(val, int);

	_putchar(c);

	return (1);
}
