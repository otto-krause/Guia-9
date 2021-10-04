#include <stdio.h>
int main()
{
	int i=0,prom, suma = 0, num = 0, mayor = 0;
	printf("ingrese Ingrese 15 numeros: ");
	while(i<=14)
	{
		scanf("%i", &num);
		suma = suma + num;
		if (num > mayor)
		{
			mayor = num;
			i++;
		}else{
			i++;
		}
	}
	prom = suma / 15;
	printf("El promedio es %i", prom);
	printf("\nEl numero mayor es %i", mayor);
	return 0;
}
