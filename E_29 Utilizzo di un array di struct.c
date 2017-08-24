//E_29
#include<stdio.h>
#include<stdlib.h>
/*Alunno Riccardo Ceccotti
Classe 3°INA
Data 24/08/2017
Versione 1.0*/
int menu () {
	int n;
	do{
		printf("/n1 - Inserisci la prenotazione \n");
		printf("/n2 - Stampa prenotazioni \n");
		printf("0- Esci \n");
		scanf("%d", & n);
	}while(n<0 || n>2);
	return n;
}
int main () {
	int max_persone=50;
	int max_prenotazioni=20;
	int posti_liberi=max_persone;
	int tot_prenotazioni=0;
	int p;
	int i;
	int scelta;
	struct prenotazione{
		char nome[30];
		int persone;
    };
    struct prenotazione tavoli[max_prenotazioni];
    printf("- programma ristorante - \n");
    do{
    	scelta=menu();
    	switch (scelta){
    		case 1:
    			if(tot_prenotazioni >= max_prenotazioni){
    				printf("Non possiamo accettare altre prenotazioni");
				}else{
					printf("per quante persone volete prenotare?");
					scanf("%d", & p);
					if(posti_liberi > p){
						posti_liberi -= p;
						tavoli[tot_prenotazioni].persone=p;
						printf("a qauale nome segno la prenotazione?");
						scanf("%s",& tavoli[tot_prenotazioni].nome);
						tot_prenotazioni++;
						printf("Prenotazione registrata! \n \n");
				   }else{
				   	printf("Non possiamo accettare, abbiamo solo %d posti liberi", posti_liberi);
				   }
				}
				break;
			case 2:
			       printf("Prenotazioni: %d \n",tot_prenotazioni);
			       for(i=0;i<tot_prenotazioni;i++){
			       	printf("%d %d persone a nome %s \n", i+1, tavoli[i].persone, tavoli[i].nome);
			       }
			       printf("Posti liberi: %d \n", posti_liberi);
			       break;
					
		}
	}while(scelta!=0);
	system("PAUSE");
}









	
