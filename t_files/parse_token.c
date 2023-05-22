#include "shell.h"
/**
 * main - main shell loop
 * @ac: argument count
 * @av: argument variables
 * @envp: environment variable
 * Description: main shell loop
 * Return: 0;
 */
char **parse_token(char **token, char *line, char *delim)
{
	char **cmd = NULL, *temp_str;

	int i = 0, count = 0, size;

	if (_strcmp(delim, ":") == 0)
		size = check_delim(line);

	else if (_strcmp(delim, " ") == 0)
		size = check_spaces(line);

	cmd = malloc(sizeof(char *) * (size + 1));

	while (*token)
	{
		temp_str = *token;
		while (temp_str[count] != '\0')
		{
			if (temp_str[count] == '\n')
				temp_str[count] = '\0';
			count++;
		}
		count = 0;
		cmd[i] = temp_str;
		i++;
		token++;
	}
	return (cmd);
}
