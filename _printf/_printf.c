#include "main.h"

/**
 * _printf - print strings in argument with variables
 *
 * @format: string passed as argument
 *
 *
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i, j, res = 0, nb_f = 0;
	conv k[] ={
		{'c', print_char},
		{'s', print_string}
	};

	va_start(ap, format);
	for (i = 0; format[i] != '\0', i++)
	{
		if (format[i] == '%')
		{
			for(j = 0; k[j]; j++)
			{
				if (format[i+1] == k[j].spec)
				{
					res += k[j].f(va_arg(ap, char*));
					i++;
					nb_f++;
					break;
				}
			}
			if (format[i+1] == '%')
			{
				_putchar('%');
				i++;
				nb_f;
			}
			else
			{
				_printf("Error: no identifier detected \n");
				return(0);
			}
		}
		else
			_putchar(format[i]);
	}

	va_end(ap);
	res += (i - 1) - nb_f;
	return (res);
}
