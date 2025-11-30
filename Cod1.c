#include <stdio.h>

int main(){

const int v0=5;
const int v1=2;
int resultado; 
resultado=v1*v0;

/*el %d sirve para imprimir un numero entero y con decimal base 10, aparte /n sirve para que el siguiente Código se reproduzca en la siguiente Linea*/
printf("el resultado es: %d\n", resultado);

//ahora el siguiente texto se reprducira en la siguiente linea//
printf("Fin del codigo \n");
//la oarte de \n sirve para saltar a la siguiente linea mientras que \t ayuda a escribir horizontalmente//
printf("XX \nYY\t ZZ\t RR");

return 0;
}