#include "shell.h"
/**
 * concat_path - concat the path with de command
 * @path_cut: the path cut
 * @commands: commands of the shell
 * @argv: argument with executed the shell
 * Return: void
 */
void concat_path(char **path_cut, char **commands, char *argv)
{
	int err = 0;

	if (_strcmp(*commands, "exit") == 0)
	{
		err = 1;
		s_exit();
	}
	else if (_strcmp(*commands, "clear") == 0)
	{
		err = 1;
		clear();
	}
	else if (access(*commands, F_OK | X_OK) != -1)
	{
		err = 1;
		exec_program(*commands, commands);
	}
	else
	{
		int i = 0;
		char concat[MAX_SIZE];
		char *cat_command = NULL;

		while (path_cut[i] != NULL)
		{
			_strcpy(concat, path_cut[i]);
			_strcat(concat, "/");
			cat_command = _strcat(concat, *commands);
			if (access(cat_command, F_OK | X_OK) != -1)
			{
				err = 1;
				exec_program(cat_command, commands);
			}
			i++;
		}
	}
	if (err == 0)
		printf("%s: %s: not found\n", argv, *commands);
}
