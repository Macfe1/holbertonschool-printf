#include "main.h"
#include <unistd.h>

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
	char buffer[1024];

	va_list param_to_exe;

	if (format == NULL)
		return (-1);

	va_start(param_to_exe, format);

	size = aux_funct(format, param_to_exe, buffer);

	va_end(param_to_exe);
	write(1, buffer, size);
	return (size);
}
