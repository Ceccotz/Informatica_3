#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/* Titolo: Creare unh programma che dateo un numero intero positivo verifichi se il numero � primo.
   Studente: Riccardo Ceccotti
   Classe: 3INA
   Data: 24/04/2017 
   Versione: 1.0  */

int main()
{
	int n;
	int primo;
	int div;
	
	printf("Inserisci un numero qualsiasi: ");
	scanf("%d",&n);
	printf("\n");
	primo=0;
	div=2;
	
	while(div<n){
		if(n % div==0){
			div=n;
			primo=1;
		}
		div++;
	}
	
	if(primo==0){
		printf("Il numero inserito e' primo");
	}else{
		printf("Il numero inserito non e' primo");
	}
}
