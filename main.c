#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell.h"

#define MAX_INPUT_SIZE 1024

int main(void)
{
    char input[MAX_INPUT_SIZE];
    char *args[MAX_INPUT_SIZE / 2 + 1];
    int should_run = 1;

    while (should_run) {
        printf("shell> ");
        fflush(stdout);

        fgets(input, sizeof(input), stdin);

        input[strcspn(input, "\n")] = '\0';

        int arg_count = 0;
        char *token = strtok(input, " ");
        while (token != NULL) {
            args[arg_count++] = token;
            token = strtok(NULL, " ");
        }
        args[arg_count] = NULL;

        if (arg_count > 0) {
            if (strcmp(args[0], "exit") == 0) {
                should_run = 0;
                continue;
            }
        }

        int status = execute_command(args);
        if (status == -1) {
            fprintf(stderr, "Error executing command.\n");
        }
    }

    return 0;
}
