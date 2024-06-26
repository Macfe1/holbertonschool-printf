#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len = 0;
	int len2 = 0, number_char = 0, numbers = 9876;
	char testing[] = "hola mundo %%";
	char modulo = '%';

	_printf("%c", modulo);

	number_char = _printf("Hello, world!\n");
	printf("%d\n", number_char);
	_printf("%d\n", number_char);

	_printf("%s numbers:%d, h\n", testing, numbers);
	printf("%s numberss: %d, h\n", testing, numbers);

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	return (0);
}
