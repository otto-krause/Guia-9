#include<stdio.h>
#include <stdlib.h>
int main()
{
	int num=0,cantp=0,cantn=0,cantc=0,I=1;
	while(I<=10)
	{
		printf("Escriba un numero:");
		scanf("%d",&num);
		if (num>0)
		{
			cantp=cantp+1;
			I++;
		}
		else
		{
			if (num==0)
			{
				cantc=cantc+1;
				I++;
			}
			else
			{
				cantn=cantn+1;
				I++;
			}}
	}
	printf("La cantidad de numeros positivos es %d ,de negativos es %d y la de ceros es %d",cantp,cantn,cantc);
	return 0;
}
