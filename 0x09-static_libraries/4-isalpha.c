#include "main.h"

/**
 * _isalpha - checks alphabet
 * @c: iput character
 * Return: 1 if c is an alphabet, else return 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
