#include "main.h"
int main(void)
{
	char *token, **buffer = NULL, *line = "Iyanu is cool", *copy;

	int len, i = 0, count = 0, count2 = 0;

	char *str;

	buffer = malloc(sizeof(char) * 1);
	copy = malloc(strlen(line) * 10);
	strcpy(copy, line);
	token = strtok(copy, " ");
	buffer[i] = strdup(token);
	i++;
	while(count < 2)
	{
		token = strtok(NULL, " :\t\r\n");
		printf("%s\n", token);
		len = strlen(token);
		token[len] = '\0';
		buffer[i] = strdup(token);
		i++;
		count++;
	}
	buffer[i + 1] = '\0';
	free(copy);
	len = strlen(buffer[0]);
	str = buffer[0];
	while (count2 < 1025)
	{
		printf("%c\n", str[count2]);
		count2++;
	}
	if (*(buffer + 0) == "Iyanu")
		printf("%s is true\n", buffer[0]);
	copy = NULL;
	return(0);
}
