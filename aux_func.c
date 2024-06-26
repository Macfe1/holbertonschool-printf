#include "main.h"

/**
 * aux_funct - manage the strings, the buffer and the parameters
 *
 * @format: the info to pass to the buffer
 * @param_to_exe: parameters to manage
 * @buffer: space where we paste all the string
 *
 * Return: the size of the parameters passed to the buffer
 */
int aux_funct(const char *format, va_list param_to_exe, char *buffer)
{
	int counter = 0, con_arg = 0, validOperation = 0, size = 0;
	convert_arg funct_struct[] = {
		{'c', pr_char},
		{'s', pr_string},
		{'\0', NULL}
	};
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
		validOperation = 0;
		for (con_arg = 0; funct_struct[con_arg].type != '\0'; con_arg++)
		{
			if (format[counter + 1] == funct_struct[con_arg].type)
			{
				size += funct_struct[con_arg].p_function(param_to_exe, size, buffer);
				counter++;
				validOperation = 1;
				break;
			}
		}
		if (!validOperation)
		{
			buffer[size++] = format[counter];
		}
	}
	return (size);
}
