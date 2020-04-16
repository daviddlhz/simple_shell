# Simple_shell (DavRob-Shell)

## Description
This project(DavRob-Shell) is a command line interpreter which is a simple implementation of
shell that we started on April 1, 2020 and ended on April 16 of the current year, in this project we put all the knowledge acquired during the first quarter, making a shell with all its commands.

## Tasks
Task  |	Description
----  | -----------
0 |	Write a README, man page, and AUTHORS file for your shell.
1	| Write a beautiful code that passes the Betty checks.
2	| Write a UNIX command line interpreter with usage simple_shell.
3	| Handle command line with arguments.
4	| Handle the PATH.
5	| Implement the exit built-in that exits the shell.
6	| Implement the env built-in, that prints the current environment.

## Requirements
- Allowed editors: vi, vim, emacs.
- All files will be compiled on Ubuntu 14.04 LTS.
- Programs and functions will be compiled with gcc 4.8.4 using the flats -Wall -Werror -Wextra and -pedantic.
- All files should end with a new line.
- Code should use the Betty style. it will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty- style\ .pl) and betty-doc.pl
- No more than 5 functions per file.
- All header files should be include guarded.
- Authorized functions and system calls:
  - access (man 2 access).
  - chdir (man 2 chdir).
  - close (man 2 close).
  - closedir (man 3 closedir).
  - execve (man 2 execve).
  - exit (man 3 exit).
  - fork (man 2 fork).
  - stat (__xstat)(man 2 stat).
  - getline (man 3 getline).
  - kill (man 2 kill).
  - open (man 2 open).
  - opendir (man 3 opendir).
  - perror (man 3 perror).
  - read (man 2 read).
  - readdir (man 3 readdir).
  - signal (man 2 signal).
  - strtok (man 3 strtok).
  - wait (man 2 wait).
  - waitpid (man 2 waitpid).
  - wait3 (man 2 wait3).
  - wait4 (man 2 wait4).
  - _exit (man 2 _exit).
  - isatty (man 3 isatty).
  - fflush (man 3 fflush).
  - write (man 2 write).
  - malloc (man 3 malloc).
  - free (man 3 free).

## File Descriptions

- AUTHORS: This file contains contributors to this repository.
- lb_shell.h: Header file containing all function prototypes and needed libraries.
- man_1_simple_shell: man page for simple_shell.

- Libraries I/O:
  - #include <stdio.h>
  - #include <stlib.h>
  - #include <unistd.h>
  - #include <string.h>
  - #include <sys/types.h>
  - #include <sys/wait.h>
  - #include <fcntl.h>
  
- Macros:
  - #define DELIMITERS " \t\r\n\a :"
  - #define NEWLINE write(STDOUT_FILENO, "\n", 1)
  - #define SEARCH_PATH "PATH"
  - #define DELIMITER_PATH "=:"
  - #define MAX_SIZE 200
  
- Prototypes:
  - void perror(const char *str);
  - void prompt(void);
  - char *_getline(char *);
  - char *_strdup(char *);
  - void split_buffer(char *, char *);
  - void exec_program(char *, char **);
  - int _strcmp(char *, char *);
  - char *path_get(void);
  - char *_strstr(char *, char *);
  - void concat_path(char **, char **);
  - char *_strcat(char *, char*);
  - char *_strcpy(char *, char *);
  
- Built-ins
  - void clear(void);
  - void s_exit(void);

- Environment
  - extern char **environ;
  
## Bugs
No bugs are known

## How To Compile
Use the command: gcc -Wextra -Werror -Wall -pedantic *.c -o shell

## Authors
Roberto Palacios [Twitter](https://twitter.com/robpalacios11) | [GitHub](https://github.com/robpalacios1) | David De La Hoz [Twitter](https://twitter.com/DavidDlhz) | [Github](https://github.com/daviddlhz)
