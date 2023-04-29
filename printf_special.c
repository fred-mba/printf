#include "main.h"

/**
 *printf_special -  handles the +, space, and # flag
 *	characters for the %d and %f conversion specifiers
 *@format: character pointer
 *
 */
void printf_special(const char *format, ...)
{
	va_list args;
	double value;
	int flag_plus, flag_space, flag_hash;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++; /*Move past the '%'*/
			flag_plus = 0;
			flag_space = 0;
			flag_hash = 0;

			/*Check for flags*/
			while (*format == '+' || *format == ' ' || *format == '#')
			{
				if (*format == '+')
				{
					flag_plus = 1;
				}
				else if (*format == ' ')
				{
					flag_space = 1;
				}
				else if (*format == '#')
				{
					flag_hash = 1;
				}
				format++;
			}

			/*Process the conversion specifier*/
			if (*format == 'd')
			{
				int value = va_arg(args, int);

				if (flag_plus && value >= 0)
				{
					putchar('+');
				}
				else if (flag_space && value >= 0)
				{
					putchar(' ');
				}
				printf("%d", value);
			}
			else if (*format == 'f')
			{
				value = va_arg(args, double);
				if (flag_hash)
				{
					printf("%.2f", value);
				}
				else
				{
					printf("%f", value);
				}
			}
			/*Handle other conversion specifiers here...*/
			else
			{
				putchar('%');
				putchar(*format);
			}
		}
		else
		{
			putchar(*format);
		}
		format++;
	}

	va_end(args);
}
