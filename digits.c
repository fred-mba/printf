#include "main.h"
/**
 * print_dec - print decimal of base 10
 * @ap: store the value of arguments
 * Return: counter prints numbers
 */
int print_dec(va_list ap)
{
	unsigned int abs, aux, count, count2;
	int num;

	count = 0;

	num = va_arg(ap, int);

	if (num < 0)
	{
		abs = (num * -1);
		count += _putchar(45);
	}
	else
		abs = num;

	aux = abs;
	count2 = 1;
	while (aux > 9)
	{
		aux = aux / 10;
		count2 = count2 * 10;
	}

	while (count2 >= 1)
	{
		count += _putchar(((abs / count2) % 10) + '0');
		count2 /= 10;
	}
	return (count);
}
/**
 * print_int - print the integers
 * @ap: Store list numbers
 * Return: Number printed
 */
int print_int(va_list ap)
{
	return (print_dec(ap));
}
