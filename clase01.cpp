/* Capturar un arreglo de n enteros & con un apuntador imprimir de manera inversa,
	1. Debe de validar el valor
*/

#include <stdio.h>
#include <conio.h>

int main()
{
int n=0;
printf("Ingrese el valor de n: ");
scanf("%i", &n);
int ar[n]= {0};
int *Value = &(ar[n-1]);
int i=0, j=0;
for (int l=0; l<n; l++)
{
	printf("Ingrese el valor de [%i]: ",l);
	scanf("%i", &ar[l]);
}
	for (i=0; i<n; i++)
	{
		printf("Arreglo posicion [%i]: %i \r\n",i+1, ar[i]);
	}
	printf("Arreglo posicion inversa\r\n");
	for (j=i; j>0; j--)
	{
		printf("\Arreglo posicion [%i]: %i \r\n",j, (*Value--));
	}
	
return 0;
}



