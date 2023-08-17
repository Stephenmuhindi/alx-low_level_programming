#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints any data type.
 * @format: List of types of arguments passed.
 */

void print_all(const char * const format, ...)
{
int i = 0;
char *str, *sep = "";
va_list args_list;

va_start(args_list, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args_list, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args_list, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args_list, double));
break;
case 's':
str = va_arg(args_list, char *);
if (!str)
str = "(nil)";
printf("%s%s", sep, str);
break;
default:
i++;
continue;
}
sep = ", ";
i++;
}
printf("\n");
va_end(args_list);
}
