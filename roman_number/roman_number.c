#include <stdlib.h>
#include <stdio.h>

int main(){
	int a;
	scanf("%d", &a);
	printf("%d => ", a);
	if(a==0){
		printf("nulla\n");
	}else if(a > 0 && a <= 3999){
		while(a>0){
			if(a >= 1000){
				printf("M");
				a = a - 1000;
			}else if(a >= 900){
				printf("CM");
				a = a - 900;
			}else if(a>=500){
				printf("D");
				a = a - 500;
			}else if(a>=400){
				printf("CD");
				a = a - 400;
			}else if(a>=100){
				printf("C");
				a = a -100;
			}else if(a>=90){
				printf("XC");
				a = a - 90;
			}else if(a>=50){
				printf("L");
				a = a - 50;
			}else if(a>=40){
				printf("XL");
				a = a - 40;
			}else if(a>=10){
				printf("X");
				a = a - 10;
			}else if(a==9){
				printf("IX");
				a = 0;
			}else if(a>=5){
				printf("V");
				a = a - 5;
			}else if(a==4){
				printf("IV");
				a = 0;
			}else{
				printf("I");
				a = a - 1;
			}
		}
		printf("\n");
	}else{
		printf("this is a negative number...\n");
	}
	return 0;
}
