//Dati N numeri interi trovare il numero minimo
int main() {
int N; //variabile che specifica il numero
int i; //specifica il valore del contatore
int min; //ecifica il valore del numero minore
int N1; //specifica il valore del primo numero
/*Alunno:Riccardo Ceccotti
  Classe:3°INA
  Data:28/12/2016
  Versione:1.0 */
printf("inserire N numeri");
scanf("%d",& N);
while (i>N) {
      i=i+1;
      printf("inserire N1");
      scanf("%d",& N1);
      if (N1<min) {
                  min=N1;
                  }          
      }
}
