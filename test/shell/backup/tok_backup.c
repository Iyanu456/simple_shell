#include "main.h"
char *_tokenizer(char *line)
{
	int i, count = 0;

	char *buffer, *token, *buf = NULL;

	buf = line;

	buffer = malloc(sizeof(char*) * MAX_BUFFER);

	token = strtok(buf, " ");

	for (i = 0; buf[i + 1] != '\0'; i++)
	{
		buffer[i] = token;

		token = strtok(NULL, " ");

		count++;
	}

	buffer[count] = '\0';
	return (buffer);
}
