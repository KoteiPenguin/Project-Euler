#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>

uint64_t test_prime_number(uint32_t n)
{
    uint64_t limit = sqrt(n);
    for (uint64_t i = 2; i < limit; i++) {
      if (n%i==0 && i!=n) {
        return false;
      }
    }
    return true;
}

bool verification_tab_prim(uint32_t n, uint32_t tab, uint32_t nb_elem) {
    bool prime = true;
    for (uint32_t i = 0; i < nb_elem; i++) {
        if (n%tab[i]==0) {
          prime = false;
          break;
        }
    }
    return prime;
}

// uint64_t tab_premier_inf(n){
//   uint64_t nb_elem = ceil(n/log(n));
//   uint64_t tab_prim[nb_elem] = NULL;
//   tab_prim[0] = 2;
//   uint64_t cpt = 1;
//   uint64_t courant = 3
//   while (true) {
//     if (courant > n) {
//       break;
//     }
//
//     for (uint64_t i = 0; i < cpt; i++) {
//       if (courant%tab_prim[i]==0) {
//         break;
//       }
//     }
//
//     courant += 3;
//   }
// }

uint64_t max_prime_number(uint64_t n)
{
    if (test_prime_number(n)) {
      return n;
    }
    uint64_t max = 1;
    for (uint64_t i = 1; i < n; i++) {
      if (n%i == 0 && test_prime_number(i)) {
        max = i;
      }
    }
    return max;
}

int main(void) {
    uint32_t tab_prim[2];
    tab_prim[0] = 2;
    tab_prim[1] = 3;
    for (uint32_t i = 0; i < 10; i++) {
      if (verification_tab_prim(i, tab_prim, 2)) {
        printf("%u\n", i);
      }
    }
}
