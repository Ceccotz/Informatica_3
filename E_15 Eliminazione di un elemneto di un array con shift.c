//E_15
#include<stdio.h>
#include<stdlib.h>
/*Alunno Riccardo Ceccotti
Classe 3°INA
Data 25/07/2017
Versione 1.0*/
int main () {
	int v[10]= {5,9,16,10,4,3,7,11,1,0};
	int i;
	int pos;
	int tot=10;
	printf("Inserisci la posizione: ");
	scanf("%d",& pos);
	
	for(i=pos;i<tot-1;i++){
		v[i]=v[i+1];
	}
	tot--;
	printf("il valore del vettore shiftato e': ");
	for(i=0;i<tot;i++){
		printf("%d",v[i]);
	}
	system("PAUSE");
}
