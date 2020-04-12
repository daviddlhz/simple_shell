## Simple_shell
### Description
This project is a command line interpreter that is a simple implementation of
shell that we started April 1st 2020

### Tasks
Task  |	Description
----  | -----------
0 |	Write a README, man page, and AUTHORS file for your shell.
1	| Write a beautiful code that passes the Betty checks.
2	| Write a UNIX command line interpreter with usage simple_shell
3	| Handle command line with arguments
4	| Handle the PATH
5	| Implement the exit built-in that exits the shell
6	| Implement the env built-in, that prints the current environment

### Requirements
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 14.04 LTS
- Programs and functions will be compiled with gcc 4.8.4 using the flats -Wall -Werror -Wextra and -pedantic
- All files should end with a new line
- Code should use the Betty style. it will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty- style\ .pl) and betty-doc.pl
- No more than 5 functions per file
- All header files should be include guarded
- Authorized functions and system calls:
  - access (man 2 access)
  - chdir (man 2 chdir)
  - close (man 2 close)
  - closedir (man 3 closedir)
  - execve (man 2 execve)
  - exit (man 3 exit)
  - fork (man 2 fork)
  - stat (__xstat)(man 2 stat)
  - getline (man 3 getline)
  - kill (man 2 kill)
  - open (man 2 open)
  - opendir (man 3 opendir)
  - perror (man 3 perror)
  - read (man 2 read)
  - readdir (man 3 readdir)
  - signal (man 2 signal)
  - strtok (man 3 strtok)
  - wait (man 2 wait)
  - waitpid (man 2 waitpid)
  - wait3 (man 2 wait3)
  - wait4 (man 2 wait4)
  - _exit (man 2 _exit)
  - isatty (man 3 isatty)
  - fflush (man 3 fflush)
  - write (man 2 write)
  - malloc (man 3 malloc)
  - free (man 3 free)

### File Descriptions
- AUTHORS: This file contains contributors to this repository
- lb_shell.h: Header file containing all function prototypes and needed libraries
- man_1_simple_shell: man page for simple_shell
- builtins.c:
  - void exec_program(char **commands)
  - void free_memory(char *buffer)
-Prototypes:
  - void perror(const char *str);
  - void prompt(void);
  - char * _getline(char *);
  - void free_memory(char *);
  - char *_strdup(char *);
  - void split_buffer(char *);
  - void exec_program(char **);
  - int _strcmp(char *, char *);
### Bugs
No bugs are known

### How To Compile
Use the command: gcc -Wextra -Werror -Wall -pedantic *.c -o shell

### Authors
Roberto Palacios Twitter | Github David De La Hoz Twitter | Github
