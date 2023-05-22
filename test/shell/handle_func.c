#include "main.h"
#include <stdlib.h>

/**
 * get_printf_func - get printf function
 * @s: strng
 * Description: searches for appropriate printf function
 * Return: formatted string
 */

int handle_token(char *token)
{
	char *str = token;

	int i;

	for (i = 0; i < 2; i++)
	{
		if (_strcmp(token, "env") == 0)
		{
			str = getenv("PATH");
			write(STDOUT, str, _strlen(str));
			write(STDOUT, "\n", 1);
			return (0);
		}

		else if (_strcmp(token, "exit") == 0)
			exit(98);
		else
			continue;
	}

	return (-1);
}
