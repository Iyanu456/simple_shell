#include "main.h"
char **create_tokens(char *line)
{
	char *token, **tokens = NULL, *copy;

	int len = 0, i = 0, spaces, count = 0, count2 = 0;

	char str;

	char **name = NULL;
	spaces = check_spaces(line);

	tokens = malloc(sizeof(char *) * (spaces + 1));

	copy = strdup(line);

	token = strtok(copy, " ");

	while (token != NULL)
	{
		tokens[i] = token;
		token = strtok(NULL, " ");
		i++;
	}
	tokens[i] = NULL;

	while (tokens[count] != NULL)
	{
		str = token[count];
		printf("%c", str);
		if (tokens[count] == "I")
			printf("true\n");
		count++;
	}
	return (tokens);
}
