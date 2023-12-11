#include "main.h"

/**
 * printf_char - a function that prints a character.
 * @val: arguments.
 * Return: one if correct.
 */
int printf_char(va_list val)
{
	char T;

	T = va_arg(val, int);
	_putchar(T);
	return (1);
}
