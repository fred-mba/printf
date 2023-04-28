#include "main.h"

/**
 * print_special - writes the character c
 * @params: argument for va_list
 *
 * Return: On success 1.
 */
int special(va_list *param)
{
	char c = va_arg(*param, int);

	return (c + 0);
}
