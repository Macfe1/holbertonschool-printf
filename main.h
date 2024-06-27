#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>


/*Structures*/

/**
 * struct fun_o - to call a function
 *
 * @type: character to compare
 * @p_function: pointer to a function
 *
 * Description: to compare a character and pass the right function
 */
typedef struct fun_o
{
	char type;
	int (*p_function)(va_list lis_arg, int start_point, char *buffer);
} fun_o;

/*Prototypes*/

int _printf(const char *format, ...);
int pr_char(va_list lis_arg, int start_point, char *buffer);
int pr_string(va_list lis_arg, int start_point, char *buffer);
int pr_modulo(
	__attribute__((unused))va_list lis_arg,
	int start_point,
	char *buffer
);
int aux_funct(const char *format, va_list lis_arg, char *buffer, fun_o v_op[]);

#endif

