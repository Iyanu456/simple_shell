#include "shell.h"
/**
 * _strncmp - compares the first n characters of s1 amd s2
 * @s1: first string
 * @s2: second string
 * @n: number of characters to compare
 * Description: compares the first n characters of a string
 * Return: integer
 */
int _strncmp(char *s1, char *s2, int n)
{
	int i;

	for (i = 0; s1[i] && s2[i] && i < n; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);

}

unsigned int check_spaces(char *s)
{
	unsigned int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			count++;
	}
	if (s[count + 1] == ' ')
		count--;

	return (count + 1);
}
