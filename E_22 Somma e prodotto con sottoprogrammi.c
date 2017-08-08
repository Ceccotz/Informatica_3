//E_22
#include<stdio.h>
#include<stdlib.h>
/*Alunno Riccardo Ceccotti
Classe 3°INA
Data 08/08/2017
Versione 1.0*/
int main() {
	int a;
	int b;
	int somma;
	int prodotto;
	printf("Inserisci il primo numero:  ");
	scanf("%d", & a);
	printf("Inserisci il secondo numero:  ");
	scanf("%d", & b);
	
	somma=somma_n(a,b);
	prodotto=prodotto_n(a,b);
	
	printf("La somma e': %d \n", somma);
	printf("Il prodotto e': %d \n", prodotto);
	
	system("PAUSE");
}

int somma_n (int a,int b){
	int somma=a+b;
	return somma;
}

int prodotto_n(int a,int b){
	int prodotto=a*b;
	return prodotto;
}
	
