#include <stdio.h>
#include <stdlib.h>
int main(){
	int num1=0, num2=0;
	printf("Ingrese 2 numeros:");
	scanf("%i %i",&num1,&num2);
	if (num1<num2){
		while(num1+1<num2){
			printf("%i ",num1+1);
			num1++;
		}
	}else{
		while(num1+1<num2){
			printf("%i ",num2+1);
			num2++;
		}
	}
	return 0;
}
