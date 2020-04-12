#include "lb_shell.h"

char *_getline(char *buffer)
{
	size_t size_buffer = 1024;
	ssize_t valid_get;

	valid_get = getline(&buffer, &size_buffer, stdin);

	if (valid_get == 1)
	{
		free(buffer);
		exit(EXIT_SUCCESS);
	}
	else if (valid_get == EOF)
	{
		NEWLINE;
		free_memory(buffer);
		exit(EXIT_SUCCESS);
	}
	if (_strcmp(buffer,"exit\n") == 0)
	{
		free_memory(buffer);
		exit(EXIT_SUCCESS);
	}
	printf("getline : %p\n", buffer);
	return(buffer);

}
