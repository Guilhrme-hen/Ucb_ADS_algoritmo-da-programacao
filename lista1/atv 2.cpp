/*Construa um algoritmo que calcule a área de um círculo cujo raio é fornecido pelo
usuário (use área= 3.14 x raio2)*/

#include<stdio.h>
int main (){
  float raio,area;
  printf ("digite o valor do raio: ");
  scanf ("%f", &raio);
  
  area = 3.14 * (raio * raio);
  
  printf ("a area do circulo do raio informado e: %f", area);

}
