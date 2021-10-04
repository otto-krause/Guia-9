#include<stdio.h>
#include <stdlib.h>
int main()
{
	int suel1,cant11=0,cant22=0,I=1;
	while(I<=20)
	{
		printf("Ingrese el sueldo:");
		scanf("%d",&suel1);
		if (suel1>2000)
		{
			cant11=cant11+1;
			I++;

		}
		else
		{
			cant22=cant22+1;
			I++;
		}
	}
	printf("%d personas ganan mas de $2000 y %d ganan menos de $2000",cant11,cant22);
	return 0;
}
