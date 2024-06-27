#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _printf - function to print
 *
 * @format: What we have to print
 *
 * Return: the number of characteres
 */
int _printf(const char *format, ...)
{
	int size = 0;
	char buffer[116024];

	fun_o v_op[] = {
		{'c', pr_char},
		{'s', pr_string},
		{'%', pr_modulo},
		{'\0', NULL}
	};

	va_list lis_arg;

	if (format == NULL)
		return (-1);

	va_start(lis_arg, format);

	size = aux_funct(format, lis_arg, buffer, v_op);

	va_end(lis_arg);

	write(1, buffer, size);
	return (size);
}
