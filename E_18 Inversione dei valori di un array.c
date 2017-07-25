//E_18
#include<stdio.h>
#include<stdlib.h>
/*Alunno Riccardo Ceccotti
Classe 3°INA
Data 25/07/2017
Versione 1.0*/
int main () {
	int v[10];
	int k;
	int i;
	int p;
	int n;
	
	for(i=0;i<10;i++){
		printf("Inserisci i numeri: ");
		scanf("%d",& n);
		v[i]=n;
	}
	k=9;
	p=0;
	for(i=0;i<k;i++){
		p=v[i];
		v[i]=v[k];
		v[k]=p;
		k--;
	}
	printf("Si ottiene: ");
	for(i=0;i<10;i++){
		printf("%d",v[i]);
	}
	system("PAUSE");
}
