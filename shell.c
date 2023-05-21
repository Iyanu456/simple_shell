#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "shell.h"

#define MAX_ARGS_SIZE 128

int execute_command(char *args[]) {
    pid_t pid;
    int status;

    pid = fork();

    if (pid < 0) {
        perror("Fork error");
        return -1;
    } else if (pid == 0) {
        if (execvp(args[0], args) < 0) {
            perror("Exec error");
            exit(EXIT_FAILURE);
        }
    } else {
        do {
            if (waitpid(pid, &status, WUNTRACED) == -1) {
                perror("Waitpid error");
                return -1;
            }
        } while (!WIFEXITED(status) && !WIFSIGNALED(status));
    }

    return 0;
}

int handle_redirection(char *args[], int arg_count) {
    return 0;
}

int handle_piping(char *args[], int arg_count) {
    return 0;
}

