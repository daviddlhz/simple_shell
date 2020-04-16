#include "shell.h"
/**
 * _getline - get a new line
 * @buffer: a pointer
 * Return: reading a string of text.
 */
char *_getline(char *buffer, int value_isa)
{
	size_t size_buffer = 1;
	ssize_t valid_get;

	valid_get = getline(&buffer, &size_buffer, stdin);

	if(value_isa != 1)
	{
		if (valid_get == EOF)
		{
			exit(EXIT_SUCCESS);
		}
	}
	else
	{
		if (valid_get == EOF)
		{
			NEWLINE;
			exit(EXIT_SUCCESS);
		}
		if (*buffer == '\n')
		{
			return (NULL);
		}

	}
	return (buffer);

}
