#include <stdio.h>
#include "main.h"

/**
 * main - outputs number of arguments passed
 * @argc: Arguments number
 * @argv: Arguments array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
