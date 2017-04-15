#include <stdio.h>
#include<math.h>
#include<stdlib.h>

/* Titolo: Disegnare tramite l'uso del carattere * un quadrato di lato n compreso tra 2 e 20
   Alunno: Riccardo Ceccotti
   Classe: 3°INA
   Data: 10/04/2017
   Versione 1.0 */

int main(){
	int i;
	int k;
	int n;
	
		
	do{
		printf("Inserisci un numero tra 2 e 20: ");
		scanf("%d",&n);
	}while((n<2) || (n>20));
	printf("\n");
	i=0;
	while(i<n){
		k=0;
		while(k<n){
			printf("*");
			k++;
		}
		printf("\n");
		i++;
	}
}
  		
