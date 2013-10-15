#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	char buffer[256];
	int length;
	fgets(buffer, 256 * sizeof(char), stdin);
	length = strlen(buffer);
	printf("%s size is %d\n", buffer, length);
	return 0;
}
