//E_27
#include<stdio.h>
#include<stdlib.h>
/*Alunno Riccardo Ceccotti
Classe 3°INA
Data 24/08/2017
Versione 1.0*/
int main () {
	int n;
	long int ris;
	do{
		printf("Inserisci un numero naturale: ");
		scanf("%d",& n);
	}while(n<0);
	ris=fattoriale(n);
	printf("Il risultato e': %d \n", ris);
	system("PAUSE");
}
int fattoriale (int n){
	if(n>1){
		return n*fattoriale(n-1);
	}else{
		return 1;
	}
	
}
	
