#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _putchar(char c);
int print_char(char *c);
int print_string(char *c);
int print_percent(char *c);
int _printf(const char *format, ...);

/**
 * struct convert - struct convert
 * @spec: the specifier
 * @f: the print function associates
 */

typedef struct convert
{
	char spec;
	int (*f)(char *c);
} conv;

#endif /* MAIN_H */
