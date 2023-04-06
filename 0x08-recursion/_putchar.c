#include <unistd.h>

/**
 * _putchar - file
 * Return: Always 0 (success)
 */

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
