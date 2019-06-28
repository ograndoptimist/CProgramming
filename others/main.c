#include <stdio.h>

int main(int argc, char** argv)
{
	char *string = "uma string que serve como teste para estudo de ponteiros";

	string[0] = 'g';
	
	printf("%s\n", string);	
	return 0;
}
