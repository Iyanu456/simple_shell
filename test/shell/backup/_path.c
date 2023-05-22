#include "main.h"
int main(void)
{
	char buffer[200];
	int len;
	getcwd(buffer, 200);
	len = _strlen(buffer);
	printf("%s\n", buffer);
	printf("%d\n", len);
	return (0);
}
