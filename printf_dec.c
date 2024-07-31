/*printf_dec*/

#include "main.h"

/**
* printf_dec - prints decimal
* @args: argument to print
* Return: integer
*/

int printf_dec(va_list args)
{
	int nmb = va_arg(args, int);
	int nmb, last = n % 10, digt;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	nmb = n;

	if (last < 0)
	{
		_putchar('-');
		nmb = -nmb;
		n = -n;
		last = -last;
		i++;
	}
	if (nmb > 0)
	{
		while (nmb / 10 != 0)
		{
			exp = exp * 10;
			nmb = nmb / 10;
		}
		nmb = n;
		while (exp > 0)
		{
			digt = nmb / exp;
			_putchar(digt + '0');
			nmb = nmb - (digt * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
