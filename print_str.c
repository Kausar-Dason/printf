#include "main.h"

/**
<<<<<<< HEAD
* printf_string - Prints a string
* @val: Arguments of type va_list
*
* Return: The length of the string
*/
=======
 * printf_string - Prints a string
 * @val: Arguments of type va_list
 *
 * Return: The length of the string
 */
>>>>>>> 3ee6a91ee1cbc058265786c2f294f04aceb79d65
int printf_string(va_list val)
{
	char *str;
	int i;
	int length;

	str = va_arg(val, char *);

	if (str == NULL)
	{
		str = "(null)";
	}

	length = _strlen(str);

	for (i = 0; i < length; i++)
	{
		_putchar(str[i]);
	}

	return (length);
}
