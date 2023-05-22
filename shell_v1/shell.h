#ifndef MAIN_H
#define MAIN_H

#define STDIN STDIN_FILENO
#define STDOUT STDOUT_FILENO
#define STDERR STDERR_FILEN0
#define MAX_TOK 100
#define MAX_BUFFER 1024

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <stdarg.h>
#include <sys/types.h>
#include <time.h>

typedef struct cmdt
{
	char *cmd;
} cmd_t;

extern char **environ;

int _strlen(const char *str);
int _strcmp(const char *str1, const  char *str2);
int _strncmp(char *s1, char *s2, int n);
char *_strdup(const char *str);
unsigned int check_delim(char *s);
unsigned int check_spaces(char *s);

char **create_tokens(char *line);
char **create_path_tokens(char *line);
char **parse_token(char **token, char *line, char *delim);
char *del_whitespace(char *line);
int handle_token(char **command,char *token);
int get_env(void);

void free_buffers(char **buf);
void prompt(void);
int handle_builtin(char **command, char *line);
void execution(char *cp, char **cmd);
char *find_path(void);
char *test_path(char **path, char *command);
char *append_path(char *path, char *command);
#endif
