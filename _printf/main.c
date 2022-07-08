#include <stdio.h>
#include "main.h"


int main (void)
{
	int len, len1, len2;
	char c = 'c';
	char *s = "World";

	len = _printf("Hello\n");
	len1 = _printf("Hello char %c\n", c);
	len2 = _printf("Hello string %s\n", s);
	printf("len are : %d %d %d\n", len, len1, len2);
	return (0);
}
