#include <stdio.h>
#include <stdlib.h>
int main(){
	int num,pot,npot=1,a=1;
	printf("Ingrese numero base:");
	scanf("%i",&num);
	printf("Ingrese numero potencial:");
	scanf("%i",&pot);
	while(a<=pot){
		npot=npot*a;
		a++;
	}
	printf("Resultado: %i",npot);
}
