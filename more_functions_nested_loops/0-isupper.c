#include "main.h"

/**
 * _isupper - Entry point
 * Description: checks for uppercase character
 * @c: c is the character
 * Return: return 1 or 0
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
