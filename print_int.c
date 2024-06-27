#include "main.h"

/**
 *
 *
 */
int pr_int(va_list lis_arg, int start_point, char *buffer)
{
	int negative = 0, iterator = 0, end = 0;
	int iter_2 = 0;
	char buffer_2[1024];
	int argument_int = va_arg(lis_arg, int);

	if (argument_int < 0)
	{
		negative = 1;
		argument_int = -argument_int;
	}

	while (argument_int != 0)
	{
		buffer_2[iterator] = argument_int % 10 + '0';
		argument_int = argument_int / 10;
		iterator++;
	}
	
	if (negative)
	{
		buffer[start_point] = '-';
	}

	end = iterator;

	for (iter_2 = end; iter_2 >= 0; iter_2--)
	{
		buffer[start_point] = buffer_2[iter_2];
		start_point++;
	}

	buffer[start_point] = '\0';

	return (start_point);
}



