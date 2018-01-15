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

#define MAXVALORI 100

typedef struct{
  int codice,
  char[50] name,
  char[50] surname,
  char[50] address,
  char[50] city,
  int n_employers,
  int revenue
}supermarket;
