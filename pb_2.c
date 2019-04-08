#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*
calcul les éléments de la suite de fibonacci
*/

uint32_t fibo(uint32_tn){
  if (n==0 | n==1) {
    return 1;
  }
  return fibo(n-1) + fibo(n-2);
}

int main(void)
{
  uint32_t courant = fibo(0);
  uint32_t compteur = 0;
  uint32_t sum = 0;

  while (courant<4000000) {
    if (courant%2==0) {
      sum += courant;
    }
    compteur += 1;
    courant = fibo(compteur);
  }
  printf("La somme des élements paire de la suite de\
  fibo inférieur à 4000000 est %u\n", sum);
}
