#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - utilize function pointer to print name.
 * @name: string to print
 * @func_ptr: pointer to print function
 * Return: viod
 **/

void print_name(char *name, void (*func_ptr)(char *))
{
	if (name == NULL || func_ptr == NULL)
		return;
	func_ptr(name);
}
