#include "shell.h"

/**
 * handle_token -checks if tokens can be executed
 * @command: command to be executed
 * @token: string
 * Description: checks if tokens can be executed
 * Return: integer
 */

int handle_token(char **command, char *token)
{
	char **str = environ;

	int i, x = 0;

	(void)command;

	for (i = 0; i < 2; i++)
	{
		if (_strcmp(token, "env") == 0)
		{
			while (str[x])
			{
				write(STDOUT, (const void *)str[x], _strlen(str[x]));
				write(STDOUT, "\n", 1);

				x++;
			}
			return (1);
		}

		else if (_strcmp(token, "exit") == 0)
		{
			exit(0);
			return (0);
		}
		else
			continue;
	}

	return (0);
}
