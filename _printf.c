#include "main.h"
/**
 * _printf - selects correct function to print
 * @format: identifier
 * Return: length of str
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", print_s}, {"%c", print_char},
		{"%%", print_37}, {"%i", print_int},
		{"%d", print_dec}, {"%r", print_srev},
		{"%R", print_rot13}, {"%b", print_bin},
		{"%u", print_unsigned}, {"%o", print_oct},
		{"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_excl_str}, {"%p", print_ptr}
	};

	va_list ap;
	int i = 0, j, len = 0;

	va_start(ap, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(ap);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(ap);
	return (len);
}
