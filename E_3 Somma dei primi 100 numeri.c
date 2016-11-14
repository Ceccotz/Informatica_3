/* Fare la somma dei primi 100 numeri*/
// Studente Ceccotti Riccardo 14/11/2016 3°INA
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
main()
{
	int Somma; //variabile che definisce la somma
	int I; //variabile che inserisce il valore del contatore
	Somma=0;
	I=1;
	while(I<=100){
		Somma=Somma+I;
		I=I+1;
	}
	printf("\nil valore della Somma è: %d" , Somma);
	system("PAUSE");
}
