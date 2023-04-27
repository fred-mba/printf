#include "main.h"
/**
 * _strlen - return lenght of dtring
 * @s: type char pointer
 * Return: length
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
/**
 * _strlenc - strlen function for constant char pointer s
 * @s: type char pointer
 * Return: c
 */
int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}
