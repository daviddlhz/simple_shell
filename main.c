#include "lb_shell.h"
/**
 * main - init shell
 * @ac: count the numbers of arguments but in this case not use
 * @av: the arguments that contains
 * Return: Always 0.
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	char *path = NULL;
	char *buffer = NULL;

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
			split_buffer(buffer, path, argv[0]);
		}

		free(buffer);
	}
	return (0);
}
