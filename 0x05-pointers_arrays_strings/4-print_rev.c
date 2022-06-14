#include "main.h"

/**
* print_rev - prints a string in revers
* @s: string to be printed in reverse
*
* Return: void
*/
void print_rev(char *s)
{
	int c = 0;
	int i;

	while (s[c] != '\0')
	{
		c++;
	}

	for (i = c - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
