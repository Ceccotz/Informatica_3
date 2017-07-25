//E_17
#include<stdio.h>
#include<stdlib.h>
/*Alunno Riccardo Ceccotti
Classe 3°INA
Data 21/07/2017
Versione 1.0*/
int main () {
	int num[10]= {0,3,6,8,9};
	int tot=5;
	int max=10;
	int x;
	int n;
	int p;
	int trovato;
	int i;
	
	 printf("Inserisci un numero: ");
	 scanf("%d",& n);
	 
	 if(tot<max){
	 	trovato=0;
	 	i=0;
	 	while((i<tot) && (trovato==0)){
	 		if(n<=num[i]){
	 			trovato=1;
			 }else{
			 	i++;
			 }
		 }
	 }
	 
	 x=tot-1;
	 while(x>=i){
	 	num[x+1]=num[x];
	 	x--;
	 }
	 
	 num[i]=n;
	 tot++;
	 
	 for(p=0;p<tot;p++){
	 	printf("%d", num[p]);
	 }
	 
	 system("PAUSE");
}
	
	
