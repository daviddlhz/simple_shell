#include "lb_shell.h"
/**
 * exec_program - executed a program.
 * @filename: name of file to executed
 * @commands: commands to executed
 * Return: Nothing
 */
void exec_program(char *filename, char **commands)
{
	int status;
	pid_t pid;

	pid = fork();

	if (pid == -1)
	{
		perror("Creation of a child process was unsuccessful \n");
	}
	else if (pid == 0)
	{
		if (execve(filename, commands, NULL) == -1)
		{
			perror("Errorx ");
		}
	}
	else
	{
		wait(&status);
	}
}
