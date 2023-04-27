#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct specifier - struct function
 * @c: flag
 * @f: function
 */

typedef struct specifier
{
	char *c;
	int (*f)(va_list);
} specifier;

int _putchar(char c);
int print_c(va_list ap);
int print_s(va_list ap);
int print_dec(va_list ap);
int print_int(va_list ar_numlist);
int (*get_func(char s))(va_list ap);
int _printf(const char *format, ...);
int print_str(va_list arguments, char *buf, unsigned int ibuf);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);
#endif
