#include "lb_shell.h"
/**
 * concat_path - concat the path with de command
 * @path_cut: the path cut
 * @commands: commands of the shell
 * Return: void
 */
void concat_path(char **path_cut, char **commands)
{
	if (_strcmp(*commands, "exit") == 0)
	{
	       s_exit();
	}
	else if (_strcmp(*commands, "clear") == 0)
	{
		clear();
	}
	else if (access(*commands, F_OK | X_OK) != -1)
	{
		exec_program(*commands, commands);
	}
	else
	{
	int i;
	char concat[MAX_SIZE];
	char *cat_command;

	i = 0;

	while (path_cut[i] != NULL)
	{
		_strcpy(concat, path_cut[i]);

	_strcat(concat, "/");

	cat_command = _strcat(concat, *commands);

	if (access(cat_command, F_OK | X_OK) != -1)
	{
		exec_program(cat_command, commands);
	}
	i++;
	}
	}
}
