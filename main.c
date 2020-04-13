#include "lb_shell.h"
/**
 * main - init shell
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	(void) ac;
	(void) av;
	path_get();
	char *buffer = NULL;
	while (1)
	{
		prompt();
		buffer = _strdup(_getline(buffer));

		printf("main : %p\n", buffer);

		printf("string: %s", buffer);

		split_buffer(buffer);

		free(buffer);
	}
	return (0);
}
