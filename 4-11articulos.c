#include <stdio.h>
#include <conio.h>
int main(){
int codigo,cantidad,cajas,sueltas; //defino variables
float importe=0;
//entrada de datos
printf ("ingrese el codigo del articulo\n");
scanf("%d",&codigo);
printf("ingrese la cantidad a comprar\n");
scanf("%d",&cantidad);
//condiciones para calcular el importe

if(codigo==1||codigo==10||codigo==100){
importe=cantidad*1000; 
}

else if (codigo==2||codigo==22||codigo==222){
  cajas=cantidad/10;
    sueltas=cantidad%10;
    importe=cajas*6500+sueltas*700;
}
else if(codigo==3||codigo==33||codigo==333){
    importe=cantidad*300;
    if(cantidad>10){
        importe*=0.9;}
    }
else if (codigo==4||codigo==44){
    importe=cantidad*100;
}
else{printf("codigo de articulo invalido\n");
    return(1);}

    //resutaldo final
printf ("articulo %d cantidad %d importe a pagar $%.2f\n",codigo,cantidad,importe);
getch();
return(0);
}