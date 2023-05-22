#include "shell.h"
char **_tokenizer(char *line)
{
	int i, count = 0;

	char **buffer, *token, *buf = NULL;

	buf = line;

	buffer = malloc(sizeof(char*) * MAX_BUFFER);

	token = strtok(buf, " ");
	if (buf != NULL)
		printf("%s\n", buf);

	for (i = 0; buf[i] != '\0'; i++)
	{
		buffer[i] = token;

		token = strtok(NULL, " ");

		count++;
	}
	printf("%d\n", count);
	return (buffer);
}
