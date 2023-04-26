#include "main.h"

/**
 * print_c - Print char in a string
 * @ap: Store the a list of characters
 * Return: number of parameters printed
 */
int print_c(va_list ap)
{
	int c = va_arg(ap, int);

	return (_putchar(c));
}

/**
 * print_s - print string
 * @ap: Store the a list of characters
 * Return: number of parameters printed
 */
int print_s(va_list ap)
{
	int i, len = 0;
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		len += _putchar(str[i]);

	return (len);
}
