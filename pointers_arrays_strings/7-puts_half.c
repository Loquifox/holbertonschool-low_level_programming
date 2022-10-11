#include "main.h"

/**
 * puts_half - prints half the string
 * @str: the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, l;

	for (l = 0; str[l]; l++)
		;
	for (i = l / 2 + (l % 2 ? 1 : 0); i < l; i++)
		putchar(str[i]);
	putchar('\n');
}
