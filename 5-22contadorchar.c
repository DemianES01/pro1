/*5-22Confeccionar un programa que pueda ingresar una secuencia de caracteres hasta que se 
digite un ‘*’. Se desea obtener e informar cuantos caracteres ingresados son numéricos y
cuantos alfabéticos. Estos últimos tienen que mostrarse separados por mayúsculas y
minúsculas. También informar la cantidad de otros símbolos que no sean ni letras ni
números.*/
#include <stdio.h>
#include <ctype.h> //libreria de verificacion de caracteres
int main()
{
char c;
int mayus=0,minus=0,num=0;
printf ("Escribe un texto para contar los caracteres (* para finalizar)\n");
while((c = getchar()) != '*') //getchar va a contar todos los caracter de un texto
//!='*' es para finalizar el ciclo cuando se escriba *
{
if (isupper(c)){
    mayus++;
}
if (islower(c)){
    minus++;
}
if (isdigit(c)){
    num++;
}
}
printf ("La cantidad de mayusculas ingresadas son: %d\n",mayus);
printf ("La cantidad de minusculas ingresadas son: %d\n",minus);
printf ("La cantidad de numeros ingresadas son: %d\n",num);
return(0);
}