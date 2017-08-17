//Es_26
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Alunno Riccardo Ceccotti
Classe 3°INA
Data 17/08/2017
Versione 1.0*/
int main () {
	int c;
	int i;
	int j;
	int v1[]={2,3,4};
	int v2[]={5,10};
	int v3[5];
	c=0;
	j=0;
	for(i=0;i<5;i++){
		if(v1[c]>v2[j] || c>2){
			v3[i]=v2[j];
			j=j+1;
		}else{
			v3[i]=v1[c];
			c=c+1;
		}
	}
	for(i=0;i<5;i++){
		printf("Il risultato e':  %d \n", v3[i]);
	}
	system("PAUSE");
}
	
