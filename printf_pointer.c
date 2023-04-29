#include "main.h"

/**
 * printf_pointer - prints a hex
 * @val: arguments.
 * Return: counter.
 */
int printf_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;
	char *hex_str;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	hex_str = (char *)malloc(sizeof(char) * 20);
	if (hex_str == NULL)
	{
		return (-1);
	}
	/*convert the hexadecimal value to a string*/
	sprintf(hex_str, "%lx", a);
	_putchar('0');
	_putchar('x');
	b = printf_hex_aux(a);
	free(hex_str);
	return (b + 2);
}
