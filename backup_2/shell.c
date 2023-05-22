#include "shell.h"
int main(int ac, char **av)
{
	char **toks;

	char *line = NULL, **buff, **quit, *temp = NULL;

	size_t len = 0;

	ssize_t linesize = 0;

	int k = 0, int_mode = isatty(STDIN);

	while (1)
	{
		int_mode = isatty(STDIN);

		if  (int_mode == 1)
			{
				write(STDOUT, "~$ ", 3);
			}

		linesize = getline(&line, &len, stdin);
		if (line[linesize - 1] == '\n')
		{
			printf("%d\n", line[linesize]);
			line[linesize - 1] = '\0';
		printf("%s, size = %zd\n", line, linesize);
		}
		buff = _tokenizer(line);
		printf("%s\n", buff[0]);
		if  (buff[0] == "exit")
			printf("yes\n");
	}
	exit(98);
	return (0);
}
