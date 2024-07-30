#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>

/**
 * struct mapping - associates format specifiers with
 *		their correspnding handler function.
 * @specifier: A string that represents the format specifier
 *		(e.g., "s" for `%s`, "d" for `%d`).
 * @func_ptr: points to a function that takes va_list
 */
struct mapping
{
	char *specifier;
	int (*func_ptr)(va_list);
};
typedef struct mapping link_t;


int _printf(const char *format, ...);
int printf_processor(const char *format, link_t mappings[], va_list args);
int _putchar(char c);
int printf_string(va_list val);
int printf_char(va_list val);
int print_percentage(va_list);
int _strlen(const char *str);

#endif
