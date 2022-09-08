/*Construa um algoritmo que a partir da leitura de dois números forneça o resto e o
quociente da divisão do primeiro pelo segundo número.
– Lembre-se das expressões aritméticas:
1. mod → m mod i: resto da divisão de m por i
2. (\) → m \ i: quociente da divisão de m por i
Exemplo: 5 mod 2 é 1
 5 \ 2 é */

#include<stdio.h>
int main(){;
	int a /*valor de a*/ ,b /*valor de b*/;
	
	printf ("digite o valor do dividendo: ");
	
	scanf ("%i", &a);
	
	printf ("digite o valor do divisor: ");
	
	scanf ("%i", &b);
	
	printf ("O quociente da divisao e %i\n", a/b);
	
	printf ("O resto da divisao e %i", a%b);
	
	
}
