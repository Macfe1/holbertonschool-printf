#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/*Prototypes*/

int _printf(const char *format, ...);
int pr_char(va_list param_to_exe, int start_point, char *buffer);
int pr_string(va_list param_to_exe, int start_point, char *buffer);
int aux_funct(const char *format, va_list param_to_exe, char *buffer);

/*Structures*/

/**
 * struct convert_arg - to call a function
 *
 * @type: character to compare
 * @p_function: pointer to a function
 *
 * Description: to compare a character and pass the right function
 */
typedef struct convert_arg
{
	char type;
	int (*p_function)(va_list param_to_exe, int start_point, char *buffer);
} convert_arg;

#endif

