#include "main.h"

/**
 * _islower - Entry point
 * Description: checks if character is in lowercase
 *@c: _islower
 * Return: Alaways 0 (Success)
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
