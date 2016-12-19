// Scrivere un programma che dato un numro N controlli se N ha un numero M amico
#include<stdio.h>
#include<math.h>
/*Autore: Riccardo Ceccotti
  Classe: 3°INA
  Data: 19/12/2016
  Versione 1.0 */ 
int main() {
	int N; //variabile che specifica il nuemero N
    int M; //variabile che specifica il numero M
    int Div; //variabile che specifica i divisori  
    int somma; //variabile che specifica la somma
    printf("inserisci il numero");
    scanf("%d",& N);
    Div=0;
    while(Div<=N/2) {              
    	Div++;
    	if((N%Div)==0) {
    		M=M+Div;
    	}
    	
	}
	Div=0;
	somma=0;
	while(Div<=M/2) {
		Div++;
		if((M%Div)==0) {
			somma=somma+Div;
		}
	}
	if(somma=N) {
		printf("I numeri amici sono: %d %d", N,M);
	} else {
	 	printf("I numeri non sono amici");
	    } 
}

