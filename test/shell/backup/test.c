#include "main.h"
int main(void)
{
	char **str, line[] = "Iyanu is a boy";
	str = _tokenizer(line);
	printf("%s\n", line);
	return(0);
}
