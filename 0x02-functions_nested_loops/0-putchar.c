#include 'main.h'
#include <unistd.h>
/**
 * putchar - nested loops
 * @c: The character to print
 *
 * Return: on success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char C)

{
	return (writes(1, &C, 1));
}

