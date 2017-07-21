//E_14
#include<stdio.h>
#include<stdlib.h>
/*Alunno Riccardo Ceccotti
Classe 3°INA
Data 21/07/2017
Versione 1.0*/
int main () {
	int v[10]= {5,9,16,10,4,3,7,11,1,0};
	int trovato;
	int n;
	int i;
	
	printf("Inserisci il numero da cercare:  ");
	scanf("%d",& n);
	i=0;
	trovato=0;
	while((trovato==0)&&(i<10)){
		if(v[i]==n){
			printf("La posizione e': %d ", i);
			trovato++;
		}else{
			i++;
		}
	}
	system("PAUSE");
}
	
	
