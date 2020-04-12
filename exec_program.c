#include "lb_shell.h"
/**
 * exec_program - executed a program.
 * @commands: pointer of a pointer
 * Return: do a copy
 */
void exec_program(char **commands)
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
		if (execve(commands[0], commands, NULL) == -1)
		{
			perror("Errorx ");
		}
	}
	else
	{
		wait(&status);
	}
}
