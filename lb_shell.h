#ifndef LB_SHELL_H
#define LB_SHELL_H

/*Libraries I/O */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define DELIMITERS " \t\r\n\a :"
#define NEWLINE write(STDOUT_FILENO, "\n", 1)

extern char **environ;

/*Prototypes*/
void perror(const char *str);
void prompt(void);
char * _getline(char *);
void free_memory(char *);
char *_strdup(char *);
void split_buffer(char *);
void exec_program(char **);
int _strcmp(char *, char *);

#endif
