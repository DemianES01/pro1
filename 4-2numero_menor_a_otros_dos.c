//numero menor a los otros
#include <stddasio.h>
int main ()
{
int n1,n2,n3,menor;
printf("ingrese 3 numeros enteros\n");
scanf("%d%d%d",&n1,&n2,&n3);
if (n1<=n2&&n1<n3) {
menor=n1;
printf("el primer valor ingresado %d es menor a los otros\n",menor);}
else {
printf("el primer valor ingresado no es menor a los otros\n");}
return (0);

}