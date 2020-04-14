#include "lb_shell.h"
/**
 * main - init shell
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	char *path;
	char *buffer = NULL;

	(void) ac;
	(void) av;

	path = path_get();
	
	while (1)
	{
		if (isatty(STDIN_FILENO) == 1)
		{
			prompt();
		}

		buffer = _strdup(_getline(buffer));

		printf("main : %p\n", buffer);

		printf("string: %s", buffer);

		split_buffer(buffer, path);

		free(buffer);
	}
	return (0);
}
