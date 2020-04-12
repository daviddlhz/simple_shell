#include "lb_shell.h"
#include <string.h>
/**
 * main - init shell
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	(void) ac;
	(void) av;

	char *buffer = NULL;
	while (1)
	{
		prompt();
		buffer = _strdup(_getline(buffer));

		printf("main : %p\n", buffer);

		printf("string: %s", buffer);

		split_buffer(buffer);

		free_memory(buffer);
	}
	return (0);
}
