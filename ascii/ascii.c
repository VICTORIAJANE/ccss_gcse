#include <stdio.h>

int main(){
	char a, b;
	a = 'c';
	b = 109;
	printf("%c %d\n", a, a);
	printf("%c %d\n", b, b);
	a = a - ('a' - 'A');
	printf("%c %d\n", a, a);
	if(a >= 'a' && a <= 'z'){
		printf("%c is a lower case\n", a);
	}else if(a >= 'A' && a <= 'Z'){
		printf("%c is an upper case\n", a);
	}
	return 0;
}
