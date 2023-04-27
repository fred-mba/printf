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

	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (pr[i].f);
}
