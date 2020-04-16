#include "lb_shell.h"
/**
 * split_buffer - cut the words in buffer with strtok.
 * @buffer: is a commands of STDIN.
 * @path: is a path.
 * Return: Nothing.
 */
void split_buffer(char *buffer, char *path, char *argv)
{
	int i = 0, j = 0;
	char *current_path = NULL;
	char *commands[MAX_SIZE];
	char *path_cut[MAX_SIZE];

	current_path = _strdup(path);
	buffer = strtok(buffer, DELIMITERS);

	while (buffer != NULL)
	{
		commands[i] = buffer;
		buffer = strtok(NULL, DELIMITERS);
		i++;
	}
	commands[i] = '\0';
	free(buffer);

		j = 0;
		path = strtok(current_path, DELIMITER_PATH);

		while (current_path != NULL)
		{
			path_cut[j] = current_path;
			current_path = strtok(NULL, DELIMITER_PATH);
			j++;
		}
		path_cut[j] = '\0';

		concat_path(path_cut, commands, argv);
}
