//Es. N°4
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Alunno Riccardo Ceccotti
Classe 3°INA
Data 21/11/2016
Versione 1.0*/
main ()
{
	float disabile;		//Disabile
	float accompagnatore;	//Accompagnatore
	float altezza;		//Altezza
	float prezzo;		//Prezzo
	float età;		//Età
	printf("é un disabile? (Si=1, No=0)");	 							
	scanf("%f",&disabile);
	if(disabile==0){																		
		printf("é un accompagnatore? (Si=1, No=0)");	 				
		scanf("%f",&accompagnatore);													
		if (accompagnatore==0){																	
			printf ("\nInserire il valore dell'età");								
			scanf("%f",&età);	
			if (età>60){																
				prezzo=25;														                                                  
			}
			else{																	
				printf("\nInserire il valore dell'altezza");										
				scanf("%f",&altezza);
				if(altezza<=100){														
					prezzo=0;															
				}
				else{																
					if(altezza<=140){													
						prezzo=28;														
	                                }
					else{															
						prezzo=34.90;												 		
																		
					}
			           }					
			    }		
		}
																	
	}
	printf("il prezzo é:%f",prezzo);	
	



