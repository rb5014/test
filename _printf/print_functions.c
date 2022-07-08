#include "main.h"

/**
 * print_char : cfr description
 * @c: input char
 * description: print a character
 * Return: a number of a character printed
 */

int print_char(char *c)
{
	_putchar(c[0]);
	return (1);
}

/**
 * print_string : cfr description
 * @c: input string
 * description: print a string
 * Return : a number of a character printed
 */

int print_string(char *c)
{
	int nb = 0, j;

	for (j = 0; c[j]; j++)
	{
		_putchar(c[j]);
		nb++;
	}
	return (nb - 1);
}

/**
 * print_percent : cfr description
 * @c: input char
 * description: print percent character
 * Return: a number of a character printed
 */

int print_percent(char *c)
{
	(void) c;
	_putchar(37);
	return (1);
}
