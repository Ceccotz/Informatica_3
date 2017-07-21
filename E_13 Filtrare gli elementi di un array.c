//E_13
#include<stdio.h>
#include<stdlib.h>
/*Alunno Riccardo Ceccotti
Classe 3°INA
Data 21/07/2017
Versione 1.0*/
int main () {
	int v[10];
	int i;
	int app;
	int pari[10];
	for(i=0;i<10;i++){
		printf("Inserisci il valore del vettore:  ");
		scanf("%d",& v[i]);
	}
	app=0;
	for(i=0;i<10;i++){
		if(v[i]%2==0){
			pari[app]=v[i];
			app++;
		}
	} 
	printf("Il vettore con numeri pari e':  ");
	for(i=0;i<app;i++){
		printf("%d  ", pari[i]);
	}
	system("PAUSE");
}
