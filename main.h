#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
/**
 * struct format - match conversion specifiers for _printf
 * @id: type char pointer of specifier
 * @f: type pointer to function for conversion specifier
 */
typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int print_s(va_list val);
int print_c(va_list val);
int print_int(va_list args);
int print_dec(va_list ap);
int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *s);
int _strlenc(const char *s);
int print_char(va_list val);
#endif
