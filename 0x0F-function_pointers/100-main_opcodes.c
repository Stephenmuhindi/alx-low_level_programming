#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own executable file.
 * @argc: Arguments number.
 * @argv: Arguments array.
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[])
{
	int numBytes, x;
	char *byteArray;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numBytes = atoi(argv[1]);

	if (numBytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	byteArray = (char *)main;

	for (x = 0; x < numBytes; x++)
	{
		if (x == numBytes - 1)
		{
			printf("%02hhx\n", byteArray[x]);

			break;
		}

		printf("%02hhx ", byteArray[x]);
	}

	return (0);
}
