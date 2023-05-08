#include "main.h"
/**
 * _memset - fill a block of the memory with a specific value
 * @s: starting address of the  memory to be filled
 * @b: the desired value
 * @n: the number of bytes changed
 * Return: change array with a new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
