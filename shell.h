#ifndef SHELL_H
#define SHELL_H

int execute_command(char *args[]);

int handle_redirection(char *args[], int arg_count);

int handle_piping(char *args[], int arg_count);

#endif /* SHELL_H */

