/*Construir un algoritmo que pueda ingresar varios números enteros, distintos de cero, de uno
por vez. El ingreso de los datos finaliza al leer un valor nulo (cero).
Informar:
a) La cantidad de valores positivos ingresados.
b) El menor valor ingresado con su respectivo número de orden durante el ingreso.
c) El porcentaje de números pares ingresados.
d) El máximo valor múltiplo de 7 ingresado con su número de ord*/

#include <stdio.h>

int main()
{
int cpos,menor,orden_menor,orden_max,cpar,max,num,i;//defino las variables
cpos=menor=orden_menor=orden_max=cpar=max=0;//las igualo a 0 
printf ("ingrese valores numericos(0 finaliza el algoritmo)\n");
scanf ("%d",&num);
orden_menor=1,orden_max=1,i=1; //antes de iniciar el ciclo las igualo a 1 para contar
while (num!=0)
{
    if (num>0)//cantidad de numeros positivos
    {
        cpos++;
    }
    if (i==1||num<menor)//menor valor ingresado y su orden
    {
        menor=num;
        orden_menor=i;

    }
    if (num%2==0)//cantidad de numeros pares
    {
    cpar++;
    }
    if (i==1||(num % 7 == 0 && num > max))//maximo comun multiplo de 7 y su orden
    {
       orden_max=i;
       max=num;
    }
    i++;
 printf ("ingrese valores numericos(0 finaliza el algoritmo)\n");
scanf ("%d",&num);
}
printf("\n La cantidad de numeros positivos ingresados fue: %d",cpos);
printf("\n La cantidad de numeros numeros pares ingresados fue %d",cpar);
printf("\n El menor numero ingresado fue %d y su orden fue %d",menor,orden_menor);
printf("\n El maximo valor multiplo de 7 ingresado fue %d y su orden fue %d",max,orden_max);
return(0);
}

