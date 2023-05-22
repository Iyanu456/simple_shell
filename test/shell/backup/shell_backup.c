#include "main.h"
int main(int ac, char **av)
{
	char **toks;

	char *line = NULL, **buff, *temp = NULL, *tmp_str;

	size_t len = 0;

	ssize_t linesize = 0;

	int conv_str, ctn = 0, ctn2 = 0, int_mode = isatty(STDIN);

	while (1)
	{
		int_mode = isatty(STDIN);

		if  (int_mode == 1)
			{
				write(STDOUT, "~$ ", 3);
			}

		linesize = getline(&line, &len, stdin);
		if (line[0] == 'I')
			printf("true\n");
		printf("%s, size = %zd\n", line, linesize);
		buff = create_tokens(line);
		while (*buff != NULL)
		{
			tmp_str = *buff;

			while (tmp_str[ctn] != '\0')
			{
				if (tmp_str[ctn] == '\n')
					tmp_str[ctn] = '\0';
				ctn++;
			}
			ctn = 0;
			if (_strcmp(tmp_str, "exit") == 0)
				printf("They are the same\n");
			while (tmp_str[ctn2] != '\0')
			{
				printf("%c\n", tmp_str[ctn2]);
				ctn2++;
			}
			ctn2 = 0;
			buff++;
		}
		if (tmp_str == "Iyanu")
			printf("true, %s\n", buff[0]);

	}
	exit(98);
	return (0);
}
