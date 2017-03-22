#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/* Titolo: Gestione nome
   Alunno: Riccardo Ceccotti
   Classe: 3°INA
   Data: 27/02/2017
   Versione:1.0 */ 
  
 int main(){
	int scelta; //Specifica il valore della scelta
	char nome[100]; //Specifica il valore della stringa
	char copia[100]; //Permette di inserire la copia della stringa nome
	int i; //Specifica il valore del contatore
	int c; //Specifica il valore del contatore della lunghezza
	int cont; //Specifica il valore del contatore della frequenza
	int freq; //Specifica il valore della frequenza
	c=0;
	do{
		printf("1-Inserisci il nome \n");
		printf("2-Calcola la lunghezza del nome inserito \n");            //Impostazione del menù
		printf("3-Calcola la frequenza caratteri \n");
		printf("0-EXIT \n");

		do{

			printf("Inserisci scelta(0-3):\n ");
			scanf("%d",&scelta);                                 //Scelta
		}while((scelta<0)||(scelta>3));
		switch(scelta){
		case 1:
				printf("Inserisci un nome qualsiasi: ");                //Inserimento del nome da analizzare 
				scanf("%s",nome);
				break;
				
		case 2: 
			while(nome[c]!='\0'){
				c++;                                                          //Calcolo della lunghezza del nome
			}
				printf("Il nome inserito e' lungo %d caratteri\n",c);
			break;
			
		case 3:                                                              
		   while (nome[i]!=0){
					   copia[i]=nome[i];
					   i++;
				}	
					i=0;
					while (copia[i]!=0){                                    //Calcolo della frequenza delle lettere del nome
						cont=copia[i];
						if (cont!='0'){
							c=0;
							freq=0;
							while (copia[c]!=0){
								if (copia[c]==cont){
									freq++;
									copia[c]='0';
								}
								c++;
							}
							printf("Il carattere %c si ripete %d volte\n",cont,freq);      //Stampa della frequenza del carattere
					}
						i++;
		      }
	   }
     	}while(scelta!=0);
    }
