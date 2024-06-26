#include "main.h"
#include <unistd.h>

/**
 * pr_char - function to pass a parameter to the buffer
 *
 * @lis_arg: list of parameters
 * @start_point: point in the buffer to know where to continue
 * @buffer: where we paste the new parameter
 *
 * Return: the number of parameters passed to the buffer
 */
int pr_char(va_list lis_arg, int start_point, char *buffer)
{
	char argument_char = (char) va_arg(lis_arg, int);

	buffer[start_point] = argument_char;

	return (1);
}

