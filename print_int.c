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
	int negative = 0, iterator = 0, iter_2 = 0;
	char buffer_2[1024];
	int argument_int = va_arg(lis_arg, int);

	if (argument_int == 0)
	{
		buffer_2[iterator] = '0';
		iterator = 1;
	}
	if (argument_int < 0)
	{
		/* boolean value to save if is negative */
		negative = 1;
		/* multiply for -1 to change the sign to positive, absolute value*/
		argument_int *=  -1;
	}
	/* invert the given number and convert it into string */
	while (argument_int != 0)
	{
		/* take the last digit into char */
		buffer_2[iterator] = argument_int % 10 + '0';
		/* remove the last number */
		argument_int = argument_int / 10;
		iterator++;
	}
	/* save the value before possible change */
	iter_2 = iterator;
	if (negative)
	{
		buffer[start_point] = '-';
		start_point++;
		iterator++;
	}
	/* get over the second buffer and save the number into the real buffer */
	for (; iter_2 >= 0; iter_2--)
	{
		buffer[start_point] = buffer_2[iter_2 - 1];
		start_point++;
	}
	return (iterator);
}



