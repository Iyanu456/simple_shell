#include"shell.h"

/**
 * _strcmp - compares two strings
 * @str1: first string
 * @str2: second string
 * Descrption: comares two strings
 * Return: 0 on sucess, 1 or -1 on failure
 */

int _strcmp(char *s1, char *s2)
{
	int i, len_1 = 0, len_2 = 0;

	while (s1[len_1] != '\0')
		len_1++;

	while (s2[len_2] != '\0')
		len_2++;

	if (len_1  < len_2)
		return (-1);

	if (len_1 > len_2)
		return (1);

	if (len_1 == len_2)
	{
		for (i = 0; i < len_1; i++)
		{
			if (s1[i] == s2[i])
				continue;
			else
				return (-1);
		}
	}
	return (0);
}

char *_strdup(const char *str)
{
	int i, len = 0;

	char *new_str;

	while (str[len] != '\0')
		len++;
	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}

	new_str[len]  = '\0';
	return (new_str);
}

int _strlen(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

char *del_whitespace(char *line)
{
	int i = 0, len;

	len = _strlen(line);

	while (line[i] != '\0')
	{
		if (line[i] == line[len] && line[len] == ' ')
		{
			line[len] = '\0';;
			break;
		}
	}

	return(line);
}
