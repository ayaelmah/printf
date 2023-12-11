#include "main.h"
/**
 * printf_string - a function that prints a string.
 * @val: an argument.
 * Return: the length of the string if else return null.
 */

int printf_string(va_list val)
{
	char *B;
	int j, len;

	B = va_arg(val, char *);
	if (B == NULL)
	{
		B = "(null)";
		len = _strlen(B);
		for (j = 0; j < len; j++)
			_putchar(B[j]);
		return (len);
	}
	else
	{
		len = _strlen(B);
		for (j = 0; j < len; j++)
			_putchar(B[j]);
		return (len);
	}
}
