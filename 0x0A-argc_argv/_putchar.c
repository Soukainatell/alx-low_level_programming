#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes character c to stdout
 * @c: the character to print
 * return: success 1.
 * on error, -1 returned errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
