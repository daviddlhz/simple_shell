#include "lb_shell.h"
/**
 * prompt - start of prompt.
 *
 * Return: No Return.
 */
void prompt(void)
{
	write(STDOUT_FILENO, "DavRob-Shell($) ", 16);
}
