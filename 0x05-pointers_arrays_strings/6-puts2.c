#include "main.h"
/**
 * puts2 - function should print one character  of two
 * starting with the first one
 * @stp: input
 * Return: print
 */
void puts2(char *stp)
{
	int longi = 0;
	int t = 0;
	char *y = stp;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0 ; o <= t ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(stp[o]);
	}
	}
	_putchar('\n');
}
