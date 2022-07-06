#include "main.h"

/**
 * _isalpha - check alphabet
 * @c: character argument
 * Return: return 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
