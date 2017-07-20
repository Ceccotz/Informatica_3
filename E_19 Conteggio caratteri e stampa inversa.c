//Es. N°19
#include<stdio.h>
#include<stdlib.h>
/*Alunno Riccardo Ceccotti
Classe 3°INA
Data 20/07/2017
Versione 1.0*/
int main () {
	char nome[100];
	int app;
	int i;
	printf("Come ti chiami? \n ");
	scanf("%s",nome);
	
	app=0;
	while(nome[app]!='\0'){
	    app++;
	}
	printf("La parola e' lunga %d caratteri",app);
	
	for(i=app;i>=0;i--){
		printf("  %c \n",nome[i]);
	}
  system("PAUSE");
}
