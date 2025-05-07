/*Confeccionar un programa que me permita calcular y mostrar una cantidad de números
primos que se solicita por la pantalla. Los números se calculan a partir del 2. Por ejemplo: Si
se ingresa el número 6, se deben generar los números: 2 , 3 , 5 , 7 , 11 , 13. El algoritmo para
el cálculo de si un número es primo o no, debe estar optimizado para que, si encuentra un
divisor, no siga buscando ya que se sabe que el número NO es primo.*/

//no lo entiendo jadsfjadjs
#include<stdio.h>
int main()
{
int cantidad,encontrados=0,numero=2;// inicia a partir del 2
printf ("Cuantos numeros primeros quiere encontrar?\n");
scanf ("%d",&cantidad);
printf("Los primeros %d numeros primos son:\n", cantidad);
while (encontrados < cantidad) { //Este bucle se repite hasta que hayas encontrado la cantidad de números primos que el usuario pidió
    int esPrimo = 1; // 1 = verdadero

    for (int i = 2; i * i <= numero; i++) { // %Este bucle verifica si num tiene algún divisor (además de 1 y él mismo).
        if (numero % i == 0) { //Si num se divide exactamente por i, entonces no es primo.
            esPrimo = 0; // 0 = falso 
            break;
        }
    }

    if (esPrimo) {
        printf("%d ", numero);
        encontrados++;
    }

    numero++;
}

printf("\n");
return 0;
}