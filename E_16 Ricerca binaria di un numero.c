#include<stdio.h>
#include<math.h>
#include<stdlib.h>
/* Titolo: Ricerca binaria in un array
   Alunno: Riccardo Ceccotti
   Classe: 3°INA
   Data: 27/02/2017
   Versione:1.0 */ 
int mai(){
    int N[20]={4,15,19,27,38,43,48,55,58,62,66,69,74,75,82,84,86,91,92,95}; //Specifica il valore dei numeri inseriti nel vettore 
    int num; //Specifica il valore del numero
    int max; //Specifica il valore del numero massimo
    int min; //Specifica il valore del numero minimo
    int centro; //Specifica il valore della media tra numeri
    int flag; //Specifica il valore del flag
    int i; //Specifica il valore edel contatore
    
    printf("Inserire il numero da cercare nel vettore"); 
    scanf("%d",&num);                                                  //Input del numero che si desidera cercare nel vettore
    min=0;
    max=19;
    flag=0;
    i=0;
    centro=0;
    printf("Inserire il numero da cercare nel vettore"); 
    scanf("%d",&num);
    centro=(max-min)/2;
	while((max!=min)&&(flag==0)){
		if(N[centro]==num){
			flag=1;
		}else{
			if(N[centro]<num){
				min=centro;
				centro=(max-min)/2+min;
			}else{
				max=centro;
				centro=(max-min)/2+min;
			}
		}
		printf("\nil centro è %d", centro);
	}
	if(flag==1){
		printf("\n Il numero è stato trovato in posizione %d\n",centro);		
	}else{
		printf("\n Il numero non è stato trovato\n");
	}
	system("PAUSE");
       
                  
          
}   
    
  
         
                
              
             
                
                           
                                  
                      
    
    
    
    
