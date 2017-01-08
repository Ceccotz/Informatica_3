//Svolgere la media di N numeri
int main() {
int somma; //variabile che specifica la somma
int N; //variabile che specifica il numero
int i; //specifica il valore del contatore
int media; //specifica il valore della media
int num; //specifica il valore di numero
/*Alunno:Riccardo Ceccotti
  Classe:3°INA
  Data:28/12/2016
  Versione:1.0 */
printf("inserire il valore di N");
scanf("%d",&N);
somma=0;
i=0;
while(i<N) {
           printf("inserisci il valore di num");
           scanf("%d", &num);
           somma=somma+num;
           i=i+1;
           }
media=somma/N;
printf("il valore della media è: %d",& media);
}           
           
           
  
