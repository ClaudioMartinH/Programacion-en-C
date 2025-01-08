// // Constantes
// #define PI 3.1416;
// #define EDAD 29;
// // Variables
// float sueldo = 1250.50;
#include <stdio.h>
int main()
{
  // #define NOMBRE valor; --> constantes
  // Tipo dato nombre = valor; --> variables
  float sueldo = 18345.50;
  printf("%f\n", sueldo);
  float bono = 456.50;
  sueldo += bono; // sueldo = sueldo + bono
  printf("%f", sueldo);
  return 0;
}