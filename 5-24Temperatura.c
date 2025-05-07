#include <stdio.h>
int main()
{
int ordenmay=0,ordenmenor=0,i=0; //definion de enteros y igualados a 0
float temp,max,min;
printf("\n ingresa temperaturas (fin=-50)");
scanf("%f",&temp);
ordenmay = ordenmenor = i = 1; //los igualo a 1 antes de comenzar los ciclos
if (temp==-50)
{printf ("ingrese temperaturas mayores a -50");
    return (0);
    
}

while (temp!=-50)      //ciclo que termina con un -50
{
    if (i==1||temp > max){    
        ordenmay=i;
        max=temp;
    }
    if (i==1||temp < min){
        ordenmenor=i;
        min=temp;
}
printf("\n ingresa temperaturas (fin=-50)");
scanf("%f",&temp);
i++; //sumatoria al final del ciclo
}
printf("\n La temperatura maxima es:%.2f. Su orden fue:%d.",max,ordenmay);
printf("\n La temperatura minima es:%.2f. Su orden fue:%d.",min,ordenmenor);
printf("\n Se ingresaron %d temperaturas validas.", i - 1); //opcional
}