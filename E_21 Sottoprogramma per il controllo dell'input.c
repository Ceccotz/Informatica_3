//E_21
#include<stdio.h>
#include<stdlib.h>
/*Alunno Riccardo Ceccotti
Classe 3°INA
Data 08/08/2017
Versione 1.0*/
int main() {
	int n1;
	int n2;
	n1=input_n();
	n2=input_n();
	if(n1>n2){
		printf("Il numero piu' grande e' %d \n", n1);
	}else{
		printf("Il numero piu' grande e' %d \n", n2);
	}
	system("PAUSE");
}

int input_n (){
	int n;
	printf("Inserisci un numero tra 0 e 100:  ");
	scanf("%d", & n);
	if((n<0) || (n>100)){
		input_n();
	}else{
		return n;
	}
}

	
