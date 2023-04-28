#include "main.h"

/**
 * convert_to_base16 - converts and prints number in base 16 recursively
 * @arg: The number to be printed
 * @len: The amount of digits to be printed.
 * Return: length.
 */
int convert_to_base16(unsigned int arg, int len)
{
	if (arg / 16)
		len = convert_to_base16(arg / 16, len + 1);
	if (arg % 16 < 10)
		_putchar(arg % 16 + 48);
	else
		_putchar(arg % 16 + 87);
	return (len);
}

/**
 * print_hexa_mini - from decimal to Hexadecimal in lowercase
 * @ap: pointer to the modified value
 *
 * Return: Hexadecimal length.
 */
int print_hexa_mini(va_list *ap)
{
	int len = 0, negative = 0;
	unsigned int value = va_arg(*ap, unsigned int);

	len = convert_to_base16(value, len) + negative + 1;
	return (len);
}
