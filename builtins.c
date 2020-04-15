#include "lb_shell.h"
/**
 * clear: Clear the display of terminal.
 *
 * Return: Nothing.
 */
void clear(void)
{
	write(STDOUT_FILENO, "\033[H\033[J", 6);
}

/**
 * s_exit: exit of the terminal.
 *
 * Return: Nothing.
 */
void s_exit(void)
{
	exit(EXIT_SUCCESS);
}
