//5-21confeccionar un programa que calcule e informe los valores de las potencias de 2 cuyo resultado sean menores a 6000.
#include <stdio.h>
#include <math.h> //agrega pow para calcular potencias
int main()
{
int resultado,num,expo;
expo=0;
num=2;
do
{
    if (resultado < 6000) { //el if delimita hasta 6000 el ciclo do-while o sino se pasa ala potencia de 14.
        printf("2^%d = %d\n", expo, resultado); //el print tiene que estar en el ciclo para repetir y dentro del if para detenerse antesy no despues.
        }
        resultado= pow(num, expo);

        
    expo++;
    
}
while (resultado<6000);//la condicion es medio al pedo porque ya el if detiene el ciclo.
return(0);
}