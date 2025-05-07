/*n negocio de venta de granos desea controlar las ventas realizadas. De cada una ingresa el
importe total y un código que indica la forma de pago. El código puede ser:
• C: cheque, 20% de recargo.
• E: efectivo, 10% de descuento.
• T: con tarjeta, 12% de recargo.
 Se debe ingresar una F para finalizar el día de venta y arrojar los siguientes totales.
Efectivo en Caja: $ xxxx.xx
Ventas con Tarjeta de Crédito: $ xxxx.xx
Ventas con cheque: $ xxxx.xx
Total de Venta: $ xxxx.xx
Importe del IVA: $ xxxx.xx
 Nota: El IVA corresponde al 21%*/
 #include <stdio.h>

 int main()
 {
 char codigo; // para trabajar con codigos hay que definir 1, despues en las condiciones asignamos letras a codigo
 float ecaja,ventat=0,ventac=0,totalventa=0,iva,importe,ventae=0;

while (codigo !='f')
{
  printf("ingrese el codigo(c=cheque, e=efectivo, t=tarjeta, f=finalizar)\n");
scanf (" %c",&codigo);//primero el codigo para evitar un bug
if (codigo == 'f') {
  break; //finaliza el programa
}
printf("ingrese el importe\n");
scanf ("%f",&importe);

      if (codigo=='c')
      {
        ventac+= importe*1.2;
      }
      else if (codigo=='e')
      {
        ventae+= importe*0.9;
      }
      else if (codigo=='t')
      {
        ventat+= importe*1.12;
      }
      else {
        printf("Codigo invalido.\n");
        break;
    }
}
printf("\nVentas totales:\n");
printf("Cheque: %.2f\n", ventac);
printf("Efectivo: %.2f\n", ventae);
printf("Tarjeta: %.2f\n", ventat);
totalventa=ventac+ventae+ventat;
printf("ventas totales:%.2f\n", totalventa);
iva=totalventa*0.21;
printf("importe del iva:%.2f\n", iva);
return 0;
}