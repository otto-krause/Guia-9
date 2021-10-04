#include <stdio.h>
#include <stdlib.h>
int main()
{
    int con1 = 1, con2 = 1, num = 0, acuV = 0, big = 0, bigF = 0, acuVFinal = 0, dia = 0;
    while (con1 <= 20) {
        while (con2 <= 15) {
            printf("Ingrese ventas del vendedor %d en el dia %d: ", con1, con2);
            scanf("%d", &num);
            acuV = acuV + num;
            if (num > big) {
                big = num;
            }
            num = 0;
            con2++;
        }
        con2 = 0;
        printf("El vendedor %d vendio en total %d unidades\n", con1, acuV);
        acuVFinal = acuVFinal + acuV;
        acuV = 0;
        if (big > bigF) {
            bigF = big;
            dia = con1;
        }
        big = 0;
        con1++;
    }
    printf("El Total de unidades vendidas fue de: %d\nEl vendedor con una mayor venta diaria fue el: Vendedor %d\n", acuVFinal, dia);
    return 0;
}
