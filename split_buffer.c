#include "lb_shell.h"
/**
 * split_buffer - cut the words in buffer with strtok.
 * @buffer: is a pointer.
 * Return: Split words.
 */
void split_buffer(char *buffer)
{
	int i = 0;
	char *commands[100];

	buffer = strtok(buffer, DELIMITERS);

	while (buffer != NULL)
	{
		commands[i] = buffer;
		buffer = strtok(NULL, DELIMITERS);
		i++;
	}
	commands[i] = NULL;

	exec_program(commands);
}
