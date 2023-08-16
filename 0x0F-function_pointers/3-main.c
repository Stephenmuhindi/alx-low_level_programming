#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - Calculates the result of basic operations.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the arguments.
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int operand1, operand2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operand1 = atoi(argv[1]);
	op = argv[2];
	operand2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && operand2 == 0) || (*op == '%' && operand2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(operand1, operand2));

	return (0);
}
