#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: parameter
 * Return: last digit
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
