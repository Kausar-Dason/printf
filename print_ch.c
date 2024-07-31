<<<<<<< HEAD
/*printf char*/
#include "main.h"

/**
 *printf_char - Prints a char
 *@val: Arguments of type va_list
 *
 *Return: Number of characters printed (1 for a single char)
=======
#include "main.h"

/**
 * printf_char - Prints a char
 * @val: Arguments of type va_list
 *
 * Return: Number of characters printed (1 for a single char)
>>>>>>> 3ee6a91ee1cbc058265786c2f294f04aceb79d65
 */
int printf_char(va_list val)
{
	char c;

	c = (char) va_arg(val, int);

	_putchar(c);

	return (1);
}
