#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/*
liste all natural number below 1000 that are multiples of 3 or 5
*/

int main(void)
{
  int sum = 0;
  for (size_t i = 0; i < 1000 ; i++) {
    if (i%3==0 | i%5==0) {
      sum += i;
    }
  }
  printf("%u\n", sum);
}
