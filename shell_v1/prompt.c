#include "shell.h"
/**
 * prompt - prompts a user for input
 * Description: requests for user input
 * Return: void;
 */
void prompt(void)
{
	if ((isatty(STDIN) == 1) && (isatty(STDIN) == 1))
		write(STDOUT, "$ ", 2);
	else
		write(STDOUT, "($) ", 4);
}
