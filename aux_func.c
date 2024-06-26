#include "main.h"

/**
 * aux_funct - manage the strings, the buffer and the parameters
 *
 * @format: the info to pass to the buffer
 * @lis_arg: parameters to manage
 * @buffer: space where we paste all the string
 * @v_op: array of structure
 *
 * Return: the size of the parameters passed to the buffer
 */
int aux_funct(const char *format, va_list lis_arg, char *buffer, fun_o v_op[])
{
	int counter = 0, coun_ope = 0, validOperation = 0, size = 0;

	if (format == NULL)
		return (-1);
	for (counter = 0; format[counter] != '\0'; counter++)
	{
		if (format[counter] != '%')
		{
			buffer[size++] = format[counter];
			continue;
		}
		if (format[counter + 1] == '%')
		{
			buffer[size++] = '%';
			counter++;
			continue;
		}
		if (format[counter + 1] == '\0')
		{
			buffer[size++] = '%';
			break;
		}
		validOperation = 0;
		for (coun_ope = 0; v_op[coun_ope].type != '\0'; coun_ope++)
		{
			if (format[counter + 1] && format[counter + 1] == v_op[coun_ope].type)
			{
				size += v_op[coun_ope].p_function(lis_arg, size, buffer);
				counter++;
				validOperation = 1;
				break;
			}
		}
		if (!validOperation)
			buffer[size++] = format[counter];
	}
	return (size);
}
