#include "main.h"

/**
 * get_func - search for a specifier and return a string
 * @s: string
 * Return: return a function
 **/

int (*get_func(char s))(va_list)
{
	specifier list[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_dec},
		{"i", print_int},
		{"S", print_str},
		{NULL, NULL}
	};

	int i;

	for (i = 0; list[i].c != NULL; i++)
	{
		if (*list[i].c == s)
			return (list[i].f);
	}
	return (NULL);
}
