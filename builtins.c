#include "lb_shell.h"

void clear(void)
{
	write(STDOUT_FILENO, "\033[H\033[J", 6);
}

void s_exit(void)
{
	exit(EXIT_SUCCESS);
}
