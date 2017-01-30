/* Effettuare il prodotto tra scalare ed il vettore
   Classe: 3°INA
   Data: 30/01/2017
   Versione: 1.0 */
   
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main() {

int N1; //specifica il valore di N1
int N2; //specfica il valore di n2
int num; //specifica il valore di num
int i; //specifica il valore del contatore
int k; //specifica il valore del contatore
int c; //specifica il valore del contatore
int x; //specifica il valore del contatore
int v[999]; //specifica il valore del vettore

do {
	printf("Inserisci il valore di N2");
	scanf("%d",&N2);
   }while(N2>1000 || N2%2==0);

do {
	printf("Inserisci il valore di N1");
	scanf("%d",&N1);
}while (N1>N2 || N1<0);

do {
	printf("inserisci il valore di k");
	scanf("%d",& k);
 }while (N1>k || N2<k);
 
 printf("Inserisci lo scalare num\n");
 scanf("%d",&num);
 i=0;
 while(i<k) {
 	printf("Inserire un numero qualsiasi\n");
 	scanf("%d",&v[i]);
 	i++;
 }
 while(i<k) {
 	v[i]=v[i]*num;
 	i++;
 }
 c=0;
 i=0;
 x=0;
 while(c<k) {
 	printf("%d\n",v[i]);
 	c++;
 	i++;
 }
}
 
 

 
 
   
