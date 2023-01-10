#include <stdio.h>
#include <stdlib.h>


float division(float *n){

*n = *n /5;
}




int main (){

  float valeur = 10;
  printf("%.2f\n", division(&valeur));

  return 0;

}