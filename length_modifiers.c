#include "main.h"

/**
 * print_num - prints number recursively
 * @value: The number to be printed
 * @len: number of digits to be printed.
 * Return: length of the digits printed
 */
int print_num(unsigned int value, int len)
{
	if (value / 10)
		len = print_num(value / 10, len + 1);
	_putchar(value % 10 + '0');
	return (len);
}

/**
 * len_modifiers - writes the unsigned integer i
 * @params: The name for va_list
 *
 * Return: number length.
 */
int len_modifiers(va_list *params)
{
	int len = 0, negative = 0;
	unsigned int value = va_arg(*params, unsigned int);

	len = print_num(value, len) + negative + 1;
	return (len);
}
