#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - produces output accoring to a format
 * @format: data type
 * Return: length of datatype
 */

int _printf(const char *format, ...)
{
	int len = 0;
	int c;
	const char *p = format;
	va_list ap;

	va_start(ap, format);
	if (format)
	{
		for (; *p != '\0'; p++)
		{
			if (*p == '%')
			{
				switch (*(++p))
				{
					case 'c':
						c = va_arg(ap, int);
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
