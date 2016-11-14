/* Date due variabili contenenti due valori, scambiare il contenuto delle due variabili */
// Studente Ceccotti Riccardo 14/11/2016 3°INA
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	int A; //variabile che definisce il valore di A
	int B; //variabile che definisce il valore di B
	int C; //variabile che definisce il valore di C
	printf("\ninserisci il valore di A:\n");
	scanf("%d",&A);
	printf("\ninserisci il valore di B:\n");
	scanf("%d",&B);
	C=A;
	A=B;
	B=C;
	printf("\nil valore di A è: %d",A);
	printf("\nil valore di B è: %d",B);
	system("PAUSE");
}

