#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int sumar(int a, int b){
  return (a + b);
}

int main(int argc, char const *argv[]) {
  clock_t begin = clock();
  srand(time(NULL));
  int a, b, result;

  for (int i = 0; i < 100000; i++) {
    a = rand()%10;
    b = rand()%10;
    result = sumar(a, b);
  }
  clock_t end = clock();
  double tiempo_ejecucion = (begin - end) / CLOCK_PER_SEC;
  printf("Tiempo: %d", tiempo_ejecucion);
  return 0;
}
