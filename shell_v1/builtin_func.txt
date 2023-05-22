#include "main.h"
int *get_env()
{
	char *path;
	path = getenv("PATH");
	write(STDOUT, path,_strlen(path));
	return (0);
}
