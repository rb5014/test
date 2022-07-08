#include "main.h"

/**
 * print_char : cfr description
 * @c: input char
 * description: print a character
 * Return: a number of a character printed
 */

int print_char(char *c)
{
	_putchar(c);
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
	int nb = 0, i = 0, j;

	while (c[i])
		i++;
	
	for (j = 0; j < (i - 1); j++)
	{
		_putchar(c[j]);
		nb++;
	}
	return (nb);
}

/**
 * print_percent : cfr description
 * @c: input char
 * description: print percent character
 * Return: a number of a character printed
 */

int print_percent(char *c)
{
	_putchar(37);
	return (1);
}
