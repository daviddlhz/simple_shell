#include "lb_shell.h"
/**
 * _getline - get a new line
 * @buffer: a pointer
 * Return: reading a string of text.
 */
char *_getline(char *buffer)
{
	size_t size_buffer = 1024;
	ssize_t valid_get;

	valid_get = getline(&buffer, &size_buffer, stdin);

	if (valid_get == EOF)
	{
		NEWLINE;
		free(buffer);
		exit(EXIT_SUCCESS);
	}
	if (_strcmp(buffer, "exit\n") == 0)
	{
		free(buffer);
		exit(EXIT_SUCCESS);
	}
	return (buffer);

}
