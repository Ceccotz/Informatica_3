//Stampare le tabelline di tutti i numeri naturali compresi tra 2 e 10. Una tabellina per riga
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/*Autore:Riccardo Ceccotti
  Data:18/12/2016
  Classe:3°INA
  Versione:1.0 */
int main()
{
	int num;		
	int i;		
	int tab;	
	for (num=2;num<=10;num++){	
		tab=0;
		printf("La tabellina di %d e':",num);				
		for (i=0;i<10;i++){	
			tab+=num;				
			printf("\t%d",tab);	
		}
		printf("\n");			
	}
}
