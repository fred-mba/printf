#include "main.h"
/**
 * print_str - prints the string.
 * Non printable as: \x + ASCII code value in hex
 * @format: check format
 * Return: printed
*/
int print_str(const char *format, ...)
{
	va_list args;
	int printed = 0;
	const char *p = format;

	va_start(args, format);
	while (*p != '\0')
	{
		if (*p == '%')
		{
			if (*(p + 1) == 'S')
			{
				char *str = va_arg(args, char *);

				while (*str != '\0')
				{
					if (*str >= 32 && *str < 127)
					{
						putchar(*str);
					}
					else
					{
						printf("\\x%02X", *str);
						printed += 3;
					}
					str++;
					printed++;
				}
				p += 2;
				continue;
			}
		}
		putchar(*p++);
		printed++;
	}
	va_end(args);
	return (printed);
}
