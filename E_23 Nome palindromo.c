//E_23
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Alunno Riccardo Ceccotti
Classe 3°INA
Data 02/08/2017
Versione 1.0*/
int main () {
	int cont;
	int i;
	char p[100];
	int palindromo;
	float medio;
	
	printf("Inserisci un nome: ");
	scanf("%s", p);
	cont=0;
	while(p[cont]!='\0'){
		cont++;
	}
    cont--;
    i=0;
    while(p[cont]==p[i] && cont>i){
    	i++;
    	cont--;
	}
	if(cont>i){
		printf("Non palindromo");
	}else{
		printf("E' palindromo");
	}
	system("PAUSE");
}
