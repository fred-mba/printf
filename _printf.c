#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - produces output accoring to a format
 * @format: parameter that contain formatting instructions
 * Return: length of datatype
 */

int _printf(const char *format, ...)
{
	int c, i = 0, len = 0;
	const char *p = format;
	va_list ap;

	va_start(ap, format);
	if (format)
	{
		if (format[0] == '%' && format[1] == '\0')
		{
			return (-1);
		}
	
		for (; *p != '\0'; p++)
		{
			if (*p == '%')
			{
				switch (*(++p))
				{
					case 'c':
						c = (char)va_arg(ap, int);
						putchar(c);
						len++;
						break;
					case 's':
						{
							const char *str = va_arg(ap, const char*);

							len += printf("%s", str);
						}
						break;
					case '%':
						putchar('%');
						len++;
						break;
					default:
						putchar(format[i + 1]);
						len++;
						break;
				}
			}
			else
			{
				putchar(*p);
				len++;
			}
		}
	}
	va_end(ap);
	return (len);
}
