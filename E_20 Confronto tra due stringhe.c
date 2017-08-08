//E_20
#include<stdio.h>
#include<stdlib.h>
/*Alunno Riccardo Ceccotti
Classe 3°INA
Data 02/08/2017
Versione 1.0*/
int main () {
	char p1[100];
	char p2[100];
	int i;
	int uguali;
	
	printf("Inserisci la prima parola: ");
	scanf("%s", p1);
	printf("Inserisci la seconda parola: ");
	scanf("%s", p2);
	
	i=0;
	uguali=0;
	while(uguali==0 && (p1[i]!='\0' || p2[i]!='\0')){
		if(p1[i]==p2[i]){
			uguali=1;
		}
		i++;
	}
	if(uguali==1){
		printf("Sono uguali");
	}else{
		printf("Non sono uguali");
	}
	system("PAUSE");
}
