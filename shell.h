#ifndef SHELL_H
#define SHELL_H

/*Libraries I/O */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>

/*Macros*/
#define DELIMITERS " \t\r\n\a :"
#define NEWLINE write(STDOUT_FILENO, "\n", 1)
#define SEARCH_PATH "PATH"
#define DELIMITER_PATH "=:"
#define MAX_SIZE 105

/*Prototypes*/
void perror(const char *str);
void prompt(void);
char *_getline(char *, int);
char *_strdup(char *);
void split_buffer(char *, char *, char *);
void exec_program(char *, char **);
int _strcmp(char *, char *);
char *path_get(void);
char *_strstr(char *, char *);
void concat_path(char **, char **, char *);
char *_strcat(char *, char*);
char *_strcpy(char *, char *);

/*built-ins*/
void clear(void);
void s_exit(void);
/*Environment*/
extern char **environ;

#endif
