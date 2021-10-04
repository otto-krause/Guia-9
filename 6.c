#include<stdio.h>
#include <stdlib.h>
int main()
{
	float num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,proA,proG;
	int a=1,b=0;
	while(a<=30)
	{
		printf("Ingrese las 10 notas: ");
		scanf("%f%f%f%f%f%f%f%f%f%f",&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num10);
		proA=(num1+num2+num3+num4+num5+num6+num7+num8+num9+num10)/10;
		printf("El promedio del alumno %d es %.1f\n",a,proA);
		b=b+proA;
		a++;
	}
	proG=a/30;
	printf("El promedio de la clase es: %.1f\n",proG);
	return 0;
}
