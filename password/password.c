#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TRUE 	1
#define FALSE 	0
#define BOOL    unsigned char

int main(){
	char password[256];
	char c;
	int length;
	int i;
	BOOL has_lower_case;
	BOOL has_upper_case;
	BOOL has_number;
	unsigned char result;

	has_lower_case = FALSE;
	has_upper_case = FALSE;
	has_number = FALSE;

	printf("Please enter your password:\n");
	fgets(password, 256 * sizeof(char), stdin);
	length = strlen(password)-1;
	if(length < 6 || length > 12){
		printf("Please check password size\n");
		return -1;
	}

	for(i=0;i<length;i++){
		c = password[i];
		if(c>='a' && c<='z'){
			has_lower_case=TRUE;
		}else if(c>='A' && c<='Z'){
			has_upper_case=TRUE;
		}else if(c>='0' && c<='9'){
			has_number=TRUE;
		}else{
			printf("Unauthorized character\n");
			return -1;
		}
	}
	result = has_lower_case + has_upper_case + has_number;
	if(result==3){
		printf("Strong password\n");
	}else if(result==2){
		printf("Medium password\n");
	}else if(result==1){
		printf("Weak password\n");
	}
	
	

	return 0;
}
