#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments passe to the program
 * @argc: number of the arguments
 * @argv: array of the arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
