#include <unistd>

/**
*_putchar - write character
* @c: parameter
* Return: 1 or -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
