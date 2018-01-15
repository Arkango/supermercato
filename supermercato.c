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
  int codice;
  char name[50];
  char surname[50];
  char address[50];
  char city[50];
  int n_employers;
  int revenue;
}supermarket;

//prototipi funzioni/procedure
void getSupermarket(supermarket VETT[],int i);

//programma principale
int main(){

  int N,i;
  supermarket SUPER[MAXVALORI];

  do{
    printf("Inserisci il numero di supermercati sui quali operare\n");
    scanf("%d",&N);
    if(N <= 0  || N > MAXVALORI){
          printf("\n Il valore immesso non e' corretto\n");
        }
  }while(N <= 0  || N > MAXVALORI);

  printf("Inserisci supermercati\n");

  for (i = 0; i < N; i++) {
      getSupermarket(SUPER,i);
  }

  return 0;
}

void getSupermarket(supermarket VETT[],int i){
  supermarket info;
  //procedura che riempie l'array dei supermermercati
  printf("Stai inserendo il supermecato con codice %d \n",i+1);
  info.codice = i;
  printf("Inserisci nome responsabile\n");
  scanf("%s",info.name);
  printf("Inserisci cognome responsabile\n");
  scanf("%s",info.surname);
  printf("Inserisci indirizzo responsabile\n");
  scanf("%s",info.address);
  printf("Inserisci citta' responsabile\n");
  scanf("%s",info.city);



  VETT[i] = info;
}
