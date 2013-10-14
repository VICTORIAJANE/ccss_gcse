#include <stdlib.h>
#include <stdio.h>

int main(){
	char buffer[256];
	fgets(buffer, 256 * sizeof(char), stdin);
	printf("%s\n", buffer);
	return 0;
}
