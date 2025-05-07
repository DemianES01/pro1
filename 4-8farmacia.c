#include <stdio.h>
int main() {
int importe, descuento, precio;
printf ("ingrese el importe\n");
scanf("%d",&importe);
if (importe<=9550){
    precio=importe*0.955;
printf("el descuento realizado es de 4.5%% por lo tanto el precio es:%d\n",precio);
}
else if (importe<=15000&&importe>=9550){
    precio=importe*0.92;
 printf("el descuento realizado es de 8%% por lo tanto el precio es:%d\n",precio);
}
else if (importe>=15000){
    precio=importe*0.895;
 printf("el descuento realizado es de 10.5%% por lo tanto el precio es:%d\n",precio);
}
return(0);
}