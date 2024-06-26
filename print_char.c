#include "main.h"
#include <unistd.h>

/**
 * pr_char - function to pass a parameter to the buffer
 *
 * @param_to_exe: list of parameters
 * @start_point: point in the buffer to know where to continue
 * @buffer: where we paste the new parameter
 *
 * Return: the number of parameters passed to the buffer
 */
int pr_char(va_list param_to_exe, int start_point, char *buffer)
{
	char argument_char = (char) va_arg(param_to_exe, int);

	buffer[start_point] = argument_char;

	return (1);
}

