#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (void)
{
	int n;
	printf ("Numero de elementos del arreglo:\n");
	scanf ("%i", &n);
	
	int arreglo[n];
	int a = 0;
	int *p = &(arreglo[n-1]);
	
	for (int i = 0; i<n ; i++)
	{
		printf ("Escriba el elemento %i del arreglo\n", i+1);
		scanf ("%i", &arreglo[i]);
	}
	
	printf ("\n ARREGLO \n");
		
	for (int i = 0; i<n ; i++)
	{
		printf ("Arreglo[%i] = %i \n", i + 1, arreglo[i]);
	}
	
	printf ("\n ARREGLO IMPRESO EN REVERSA CON APUNTADOR \n");
	
	for (int i=n ; i> 0 ; i--)
	{
		printf ("Arreglo[%i] =: %i \n" ,i , (*p));
		p--;
	}
	return 0;
}
