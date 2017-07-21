//Es_12
#include<stdio.h>
#include<stdlib.h>
/*Alunno Riccardo Ceccotti
Classe 3°INA
Data 20/07/2017
Versione 1.0*/
int main () {
	int v[10];
	int i;
	
	for(i=0;i<10;i++){
		printf("Inserici il valore del vettore:  ");
		scanf("%d",& v[i]);
	}
	printf("Il vettore e': ");
	for(i=9;i>=0;i--){
		if(v[i]!=0){
			printf("%d ",v[i]);
		}
	}
	system("PAUSE");
}
