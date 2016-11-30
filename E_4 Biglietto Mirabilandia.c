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
	float età;		//età
	printf("é un disabile? (1=Si, 0=No) ");	 							
	scanf("%f",&disabile);
	if(disabile==0){																		
		printf("é un accompagnatore? (1=Si, 0=No) ");	 				
		scanf("%f",&accompagnatore);													
		if (accompagnatore==0){																	
			printf ("Inserire il valore dell'età");								
			scanf("%f",&età);	
			if (età>60){																
				prezzo=25;														                                                  
			}
			else{																	
				printf("Inserire il valore dell'altezza ");										
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
	printf("il prezzo é:%f",prezzo);	
	



