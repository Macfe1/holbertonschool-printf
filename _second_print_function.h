#include "main.h"
#include <unistd.h>

/**
 *
 *
 *
 *
 */
int _printf(const char *format, ...)
{
	int counter = 0, counter_arg = 0;

	convert_arg funct_struct[] = {

		{'c', print_char},
		{'s', print_string},
		{'%', print_mod},
		{'d', print_integer},
		{'i', print_long}
	};

	va_list parameters_to_execute;

	va_start(parameters_to_execute, format);
	
	for (counter = 0; format[counter] != '\0' && format != NULL; counter++)
	{
		counter_arg = 0;

		if (format[counter] != '%')
		{
			buffer[size] += format[counter];
			continue;
		}
		while (funct_struct[counter_arg].type != '\0')
		{
			/*if(format[counter] != '%')*/
			if (format[counter + 1] == '\0' && format[counter + 1] == funct_struct[counter_arg].type)
			{
				size += funct_struct[counter_arg].p_function(parameters_to_execute);

			/*revisar necesitad de counter +=2*/
			}

			counter_arg++;
		}


	}
}
