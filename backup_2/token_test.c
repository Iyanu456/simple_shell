#include "shell.h"
char *_tokenizer(char *line)
{
	int i, count = 0;

	char *buffer, *token, buff[1024];

	buffer = malloc(_strlen(line) + 1);
	_strcpy(buffer, line);
	token = strtok(buffer, " ");
	while (token)
	{
		buff[count] = token;
		token = strtok(NULL, " ");
		count++;
	}
	printf("%s, %d\n", buffer[0], count);
	return (buffer);
}
