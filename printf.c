#include "main.h"
/**
 * _printf - main function to print in console
 * @format: array to print and check type
 * Return: count of character printed
 **/
int _printf(const char *format, ...)
{
	int index = -1;

	int i;
	va_list ap;
	int (*str)(va_list);

	va_start(ap, format);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);

	index = 0;

	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				index +=  _putchar(format[i]);
				i++;
			}
			else if (format[i + 1] != '\0')
			{
				str = get_func(format[i + 1]);
					if (str)
						index += str(ap);
					else
						index += _putchar(format[i]) + _putchar(format[i + 1]);
					i++;
			}
		}
		else
			index += _putchar(format[i]);
	}
	va_end(ap);
	return (index);
}
