#include "lb_shell.h"
/**
 * free_memory - free memory of pointers.
 * @buffer: is a pointer.
 * Return: Nothing.
 */
​
void free_memory(char *buffer)
{
	free(buffer);
}
