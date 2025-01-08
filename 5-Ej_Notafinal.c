/*
obtener el promedio de nota de los dos examenes de un alumno
*/

#include <stdio.h>
int main()
{

  float examen1, examen2;
  printf("Introduce la primera nota: ");
  scanf("%f", &examen1);
  printf("Introduce la segunda nota: ");
  scanf("%f", &examen2);

  float notaFinal;
  notaFinal = (examen1 + examen2) / 2;
  printf("Primera nota de examen: %.2f\n", examen1);
  printf("Segunda nota de examen: %.2f\n", examen2);
  printf("La nota media es: %.2f\n", notaFinal);
  return 0;
}