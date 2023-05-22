#include "main.h"
int main(int ac, char **av)
{
	char **toks;

	char *line = NULL, *token, *delimiter = " ", *buff;

	size_t len = 0;

	ssize_t linesize = 0;

	int int_mode = isatty(STDIN), counter = 0, tok_length;

	while (1)
	{
		int_mode = isatty(STDIN);

		if  (int_mode == 1)
			{
				write(STDOUT, "~$ ", 3);
			}

		linesize = getline(&line, &len, stdin);

		token = strtok(line, delimiter);

		tok_length = _strlen(token);

		toks = malloc(sizeof(char*) * tok_length);

		while (token != NULL)
			{
				toks[counter] =  _strdup(token);
				token = strtok(NULL, delimiter);
				counter++;
			}
		int i;
		toks[counter] = token;
		for (i = 0; i < counter; i++)
		{
		       printf("arr[%d]: %s\n", i, **toks[i]);
		}
	}
	return (0);
}
