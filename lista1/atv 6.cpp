/*Leia 2 valores A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a
média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma
dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0.*/

#include <stdio.h>
int main (){
float notaA, notaB, media;

printf ("peso nota A: 3,5\n");
printf ("peso nota B: 7,5\n");

printf ("digite a primeira nota A ");
scanf("%f", &notaA);

printf ("digite a primeira nota B ");
scanf("%f", &notaB);

media = (3.5*notaA + 7.5*notaB)/11;

printf ("a media obitida foi: %f", media);

}
