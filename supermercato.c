/*
  programma di gestione catena supermermercati

  dati per singolo supermercato
    name,surname respondabile
    address
    city
    employers number
    revenue

  //charge info
  //visualizzare supermercati del supervisore inserito
  //show supermarkets in the city inserted
  //show supermarket which has the maximum of employers
*/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//varibili globali
#define MAXVALORI 100

//definizione tipi
typedef struct{
  int codice,
  char[50] name,
  char[50] surname,
  char[50] address,
  char[50] city,
  int n_employers,
  int revenue
}supermarket;

//prototipi funzioni/procedure
void getSupermarket(supermarket VETT[],int i);

//programma principale
int main(){

  int N;
  supermarket SUPER[MAXVALORI];

  do{
    printf("Inserisci il numero di supermercati sui quali operare\n");
    scanf("%d",&N);
    if(N <= 0  || N > MAXVALORI)
          printf("\n Il valore immesso non e' corretto", );
  }while(N <= 0  || N > MAXVALORI);

  printf("Inserisci supermercati\n");

  for (i = 0; i < N; i++) {
      SUPER[i]=getSupermarket(SUPER,i);
  }

  return 0;
}

void getSupermarket(supermarket VETT[],int i){
  //procedura che riempie l'array dei supermermercati
  printf("Inserisci supermecato con codice %d \n",i+1);
  VETT[i].codice = i;
}
