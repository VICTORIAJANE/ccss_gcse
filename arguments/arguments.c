#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){
	int a;	
	if(argc<2){
		printf("Need at least two arguments\n");
		return -1;
	}
	a = atoi(argv[1]);
	printf("%d\n", a);
	return 0;
}
