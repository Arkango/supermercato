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
#define CHARLENGHT 50
static int maxEmployeers = 0;

//definizione tipi
typedef struct{
  int codice;
  char name[CHARLENGHT];
  char surname[CHARLENGHT];
  char address[CHARLENGHT];
  char city[CHARLENGHT];
  int n_employers;
  int revenue;
}supermarket;

//prototipi funzioni/procedure
void getSupermarket(supermarket VETT[],int i);
void showSupermarketMaxEmployeers(supermarket VETT[],int N);
void lookForName(char nome[]);
void lookForCity(char city[]);

//programma principale
int main(){

  int N,i,choice;
  char citta[CHARLENGHT],nome[CHARLENGHT];
  supermarket SUPER[MAXVALORI];

  do{
    printf("Inserisci il numero di supermercati sui quali operare\n");
    scanf("%d",&N);
    if(N <= 0  || N > MAXVALORI){
          printf("\n Il valore immesso non e' corretto\n");
        }
  }while(N <= 0  || N > MAXVALORI);

  printf("Inserisci supermercati\n\n");

  for (i = 0; i < N; i++) {//inserimento supermercati
      getSupermarket(SUPER,i);
  }

  do {
    printf("****  Menu' (alla scelta termina programma vedrai sup. con max dipendenti) ****\n");
    printf("****  0 termina programma  ****\n");
    printf("****  1 cerca per nome supervisore supermercati corrrelati  ****\n");
    printf("****  2 cerca supermercati nella citta'  ****\n");
    switch (choice) {
      case 0:
          showSupermarketMaxEmployeers(SUPER,N);
        break;
      case 1:
          printf("Inserisci nome responsabile che vuoi cercare (Case-Sensitive)\n");
          scanf("%s",nome);
          lookForName(nome);
        break;
      case 2 :
      printf("Inserisci citta' che vuoi cercare (Case-Sensitive)\n");
      scanf("%s",citta);
      lookForCity(citta);
        break;
    }//fine switch
  } while(choice != 0);
  return 0;
}//fine main

void getSupermarket(supermarket VETT[],int i){
  supermarket info;
  //procedura che riempie l'array dei supermermercati
  printf("\n\nStai inserendo il supermecato con codice %d \n",i+1);
  info.codice = i;
  printf("Inserisci nome responsabile\n");
  scanf("%s",info.name);
  printf("Inserisci cognome responsabile\n");
  scanf("%s",info.surname);
  printf("Inserisci indirizzo responsabile\n");
  scanf("%s",info.address);
  printf("Inserisci citta' responsabile\n");
  scanf("%s",info.city);
  printf("Inserisci numero dipendenti responsabile\n");
  scanf("%d",&info.n_employers);
  if(info.n_employers > maxEmployeers){
    maxEmployeers = info.n_employers;
  }
  printf("Inserisci fatturato del passto anno responsabile\n");
  scanf("%d",&info.revenue);
  VETT[i] = info;
}

void showSupermarketMaxEmployeers(supermarket VETT[],int N){
  //mostra i supermercati con il massimo numero di dipendenti
  int i;
  for (i = 0; i < N; i++) {
    if(VETT[i].n_employers == maxEmployeers){
      printf("il supermercato con codice %d ha il numero di dipendenti massimo\n",i+1);
    }
  }
}

void lookForName(char nome[]){

}

void lookForCity(char citta[]){

}
