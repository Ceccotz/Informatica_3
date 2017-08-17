//Es_25
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Alunno Riccardo Ceccotti
Classe 3°INA
Data 17/08/2017
Versione 1.0*/
int main () {
	int n;
	int res;
	printf("Inserisci un numero:  ");
	scanf("%d", & n);
	res=primo_n(n);
	if(res==0){
		printf("Il numero e' primo  ");
	}else{
		printf("Il numero non e' primo  ");
	}
	system("PAUSE");
}

int primo_n (int n){
	int i;
	int primo;
	i=n-1;
	primo=0;
	
	while((i>=2) && (primo==0)){
		if(n%i==0){
			primo=1;
		}
		i--;
	}
	return primo;
}

	
