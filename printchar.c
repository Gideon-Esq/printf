#include <unistd.h>

int printchar(int ch)
{
	return write(1, &ch, 1);
}

