#include <stdio.h>

int main(void) {
  int tabuada;
  int numero = 0;
  int resultado = 0;

  printf("Digite a tabuada: ");
  scanf( "%i", &tabuada );
  
  for ( numero = 0; numero <= 10; numero++ ) {
    resultado = tabuada * numero;
	  printf( "\n%d * %d = %d", tabuada, numero, resultado);
  }

  return 0;
}