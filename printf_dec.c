#include "main.h"

/**
* printf_dec - prints decimal
* @args: argument to print
* Return: integer
*/

int printf_dec(va_list args)
{
	int nmb = va_arg(args, int);
	int digt;
	int  i = 0;
	int exp = 1;

	if (nmb < 0)
	{
		_putchar('-');
		nmb = -nmb;
		i++;
	}

	if (nmb == 0)
	{
		_putchar('0');
		return (1);
	}
	
	while (nmb / exp >= 10)
		exp = exp * 10;
	
	while (exp > 0)
	{
		digt = nmb / exp;
		_putchar(digt + '0');
		nmb = nmb % exp;
		exp = exp / 10;
		i++;
	}

	return (i);
}
