#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int printf_string(va_list val);
int printf_char(va_list val);
int print_percentage(void);
int _strlen(const char *str)
int printf_intg(va_list args);

#endif
