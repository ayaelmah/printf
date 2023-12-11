#include "main.h"
/**
 * _strlen - a function that Returns the lenght of a string.
 * @s: a character pointer
 * Return: R.
 */
int _strlen(char *s)
{
	int R;

	for (R = 0; s[R] != 0; R++)
		;
	return (R);

}
/**
 * _strlenc - a function for constant char pointer s
 * @s: a character pointer
 * Return: R.
 */
int _strlenc(const char *s)
{
	int R;

	for (R = 0; s[R] != 0; R++)
		;
	return (R);
}
