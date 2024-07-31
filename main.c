#include <limits.h>
#include <stdio.h>
#include "main.h"


/**
 * main - Entry point
 *
 * Return: Always 0
 */
>>>>>>> 3ee6a91ee1cbc058265786c2f294f04aceb79d65

int main(void)
{
	int len;
	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");

	printf("Length returned by _printf: %d\n", len);
	printf("Length returned by printf: %d\n", len2);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);

	return (0);
}
