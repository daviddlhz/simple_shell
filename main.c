#include "lb_shell.h"
/**
 * main - init shell
 * @ac: count the numbers of arguments but in this case not use
 * @av: the arguments that contains
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

		if (buffer != NULL)
		{
			split_buffer(buffer, path);
		}

		free(buffer);
	}
	return (0);
}
