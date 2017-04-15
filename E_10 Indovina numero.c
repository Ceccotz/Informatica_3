#include <stdio.h>
#include<math.h>
#include<stdlib.h>

/* Titolo: Indovina numero
   Alunno: Riccardo Ceccotti
   Classe: 3°INA
   Data: 10/04/2017
   Versione 1.0 */

int main(){
	int n_u;
	int n_c;
	int j;
	int indovinato;
	
	n_c=rand()%15;
	j=10;
	indovinato=0;
	
	printf("Inserisci il numero casuale ");
	scanf("%d",&n_u);
	do{
		printf("\nHai 10 tentativi per indovinarlo: ");
		scanf("%d",&n_c);
		if(n_u==n_c){
			indovinato=1;
		}
		j--;
	}while(j>0 && indovinato==0);
	if(indovinato==1){
		printf("Hai vinto!");
	}else{
		printf("Hai perso :(");
	}
}
	
