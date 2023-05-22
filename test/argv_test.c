#include <unistd.h>
#include <stdio.h>
int main(int ac, int argc, char **av)
{
	char **str = av;
	int i;
	for (i = 0; i < argc - 1; i++)
	{
		printf("%s\n", str[i]);
	}
	printf("%d\n", i);
	return (0);
}
