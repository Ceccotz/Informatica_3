/*Dati tre numeri trovare il numero massimo*/
//Studente Ceccotti Riccardo 14/11/2016 3°INA
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
	int N1; //variabile che definisce il valore di N1
	int N2; //variabile che inserisce il valore di N2
	int N3; //variabile che definisce il valore di N3
	int Num_Mass; //variabile che definisce il valore di Num_Mass
	printf("inserisci il primo numero");
	scanf("%d",& N1);
	printf("\ninserisci il secondo mumero");
	scanf("%d",& N2);
	printf("\ninserisci li terzo numero");
	scanf("%d",& N3);
	if(N1>N2){
		Num_Mass=N1;
	}
	else{
	    Num_Mass=N2;
	}
	if(N3>Num_Mass){
		Num_Mass=N3;
	}
	printf("\nil numero maggiore è: %d", Num_Mass);
}
