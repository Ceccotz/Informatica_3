//Es_24
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Alunno Riccardo Ceccotti
Classe 3°INA
Data 17/08/2017
Versione 1.0*/
int main () {
	int res;
	int n;
	
	do{
		printf("Inserisci un numero:  ");
		scanf("%d", & n);
	}while(n<0);
	
	res=fat_n(n);
	printf("Il fattoriale è:   %d", res);
	system("PAUSE");
}

int fat_n (int n){
	int app;
	app=1;
	if(n>=0){
		while(n!=0){
			app=app*n;
			n--;
		}
	}
	return app;
}

