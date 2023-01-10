#include "main.h"

// Prototype fonction --> type de return (void / int / float etc...) + nom de la fonction (<type de paramètres et nom paramètres)
unsigned long calculfibo(int n ) {
  if (n == 0) {
    return 0;
  }
  if (n == 1) {
    return 1;
  }
  return calculfibo(n - 1) + calculfibo(n - 2);
}
