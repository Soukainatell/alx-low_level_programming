#include "main.h"
/**
 * _puts - prints a string  followed by  new line
 * @stp: string to print
 */
void _puts(char *stp)
{
	while (*stp != '\0')
	{
		_putchar(*stp++);
	}
		_putchar('\n');
}
