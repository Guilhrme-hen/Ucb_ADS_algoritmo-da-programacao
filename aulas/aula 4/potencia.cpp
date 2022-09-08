#include<stdio.h>
#include<math.h>
int main(){
	int base, expoente,resultado;
	
	printf("digite valor da base: ");
	scanf ("%d", &base);
	
	printf("digite valor do expoente: ");
	scanf ("%d", &expoente);
	
	resultado = pow(base,expoente);
	printf ("%d", resultado);
		
	
	
}
