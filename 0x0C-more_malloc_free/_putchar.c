#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: The character to be printed
 * Return: on success 1.
 * On error, -1 returned, errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
