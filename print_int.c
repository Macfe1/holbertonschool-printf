#include "main.h"

/**
 * pr_int - function to pass an int to a string
 *
 * @lis_arg: variadic functions
 * @start_point: where to paste the parameters
 * @buffer: the space to paste all the string
 *
 * Return: the number of characteres
 */
int pr_int(va_list lis_arg, int start_point, char *buffer)
{
	int negative = 0, iterator = 0, iter_2 = 0, iter_3 = 0;
	char buffer_2[1024];
	int argument_int = va_arg(lis_arg, int);
	char int_min_str[] = "-2147483648";

	if (argument_int == INT_MIN)
	{
		for (iter_3 = 0; int_min_str[iter_3] != '\0'; iter_3++)
			buffer[start_point++] = int_min_str[iter_3];
		return (iter_3);
	}
	if (argument_int == 0)
	{
		buffer_2[iterator] = '0';
		iterator = 1;
	}
	if (argument_int < 0)
	{
		negative = 1;
		argument_int *=  -1;
	}
	while (argument_int != 0)
	{
		buffer_2[iterator] = argument_int % 10 + '0';
		argument_int = argument_int / 10;
		iterator++;
	}
	iter_2 = iterator;
	if (negative)
	{
		buffer[start_point] = '-';
		start_point++;
		iterator++;
	}
	for (; iter_2 >= 0; iter_2--)
	{
		buffer[start_point] = buffer_2[iter_2 - 1];
		start_point++;
	}
	return (iterator);
}



