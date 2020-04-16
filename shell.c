#include "shell.h"
/**
 * main - init shell
 * @argc: count the numbers of arguments but in this case not use
 * @argv: the arguments that contains
 * Return: Always 0.
 */

int main(__attribute__((unused)) int argc, char **argv)
{
	char *path = NULL;
	char *buffer = NULL;
	int value_isa = 0;

	path = path_get();

	while (1)
	{
		value_isa = isatty(STDIN_FILENO);

		if (value_isa == 1)
		{
			prompt();
		}

		buffer = _strdup(_getline(buffer, value_isa));

		if (buffer != NULL)
		{
			split_buffer(buffer, path, argv[0]);
		}
	}
	return (0);
}
