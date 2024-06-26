#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/*Prototypes*/
int _printf(const char *format, ...);

/*Structures*/

typedef struct convert_arg
{
	char type;
	int(*p_function)(va_list param_to_exe, int start_point, char *buffer);
} convert_arg;

/*Prototypes*/
int pr_char(va_list param_to_exe, int start_point, char *buffer);
int pr_string(va_list param_to_exe, int start_point, char *buffer);
int aux_funct(const char *format, va_list param_to_exe, char *buffer);

#endif

