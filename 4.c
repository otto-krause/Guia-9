#include <stdio.h>
#include <stdlib.h>
int main(){
	int a,b=1,fact=1;
	printf("Ingresar un numero:");
	scanf("%i",&a);
	while(b<=a){
		fact=fact*b;
		b++;
	}
	printf("Factorial es: %i",fact);

}
