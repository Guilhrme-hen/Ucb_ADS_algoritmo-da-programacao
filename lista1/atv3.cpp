/*Construa um algoritmo que calcule a média aritmética de 3 números quaisquer
fornecidos pelo usuário.*/

#include<stdio.h>
int main(){;
	float nota1,nota2,nota3, media;
	
	printf ("digite a nota 1: ");
	scanf ("%f", &nota1);
	
	printf ("digite a nota 2: ");
	scanf ("%f", &nota2);
	
	printf ("digite a nota 3: ");
	scanf ("%f", &nota3);
	
	media = (nota1+nota2+nota3)/3;
	
	printf ("a media da nota e: %f", media);
	
}
