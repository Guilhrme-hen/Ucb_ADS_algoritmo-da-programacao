/*Construa um algoritmo que a partir da leitura de dois números forneça o resto e o
quociente da divisão do primeiro pelo segundo número.
– Lembre-se das expressões aritméticas:
1. mod → m mod i: resto da divisão de m por i
2. (\) → m \ i: quociente da divisão de m por i*/

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
