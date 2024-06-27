#include "main.h"

/**
 * pr_modulo - function to pass a % to the buffer in case of %%
 *
 *
 * @list_arg: variadic list (unused)
 * @start_point: the position where we have to paste the %
 * @buffer: the place where we paste the %
 *
 * Return: the number of characters
 */
int pr_modulo(
	__attribute__((unused))va_list list_arg,
	int start_point,
	char *buffer
)
{
	buffer[start_point] = '%';

	return (1);
}
