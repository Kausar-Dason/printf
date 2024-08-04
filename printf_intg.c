#include "main.h"
/**
 * printf_intg - prints integer
 * @args: argument to print
 * Return: integer
 */
int printf_intg(va_list args)
{
	int n = va_arg(args, int);
	int numb, lst = n % 10, digit, ex = 1;
	int  i = 1;

	n = n / 10;
	numb = n;

	if (lst < 0)
	{
		_putchar('-');
		numb = -numb;
		n = -n;
		lst = -lst;
		i++;
	}

	if (n == 0)
	{
		_putchar(lst + '0');
		return (i);
	}

	if (numb > 0)
	{
		while (numb / 10 != 0)
		{
			ex = ex * 10;
			numb = numb / 10;
		}
		numb = n;
		while (ex > 0)
		{
			digit = numb / ex;
			_putchar(digit + '0');
			numb = numb - (digit * ex);
			ex = ex / 10;
			i++;
		}
	}
	_putchar(lst + '0');

	return (i);
}
