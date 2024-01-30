#include <unistd.h>
/**
 * printchar - The write() function for the printf project
 * @ch: parmeter for the printchar function.
 * Return: Write if success
 */
int printchar(int ch)
{
	return (write(1, &ch, 1));
}

