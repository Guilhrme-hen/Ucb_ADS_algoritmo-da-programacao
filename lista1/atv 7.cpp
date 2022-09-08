/*Escreva um programa que leia o nome do funcionário, o sexo (F ou M), o número de
matrícula do funcionário, o número de horas trabalhadas, o valor que recebe por hora
e calcule o salário desse funcionário. A seguir, mostre todos os dados na tela, os dados
de entrada e os dados de saída.*/

#include<stdio.h>
int main (){
	char nome[30], sexo, matricula[10];
	float horasT, salarioH, salarioM;
	
	printf("Informe seu nome: ");
    scanf("%[^\n]", &nome);
    
	printf("Informe seu sexo (M/F): ");
    scanf("\n%c", &sexo);
    
	printf("Informe seu numero da matricula: ");
    scanf("%s", &matricula);
    
	printf("Informe Horas trabalhada Mensal: ");
    scanf("%f", &horasT);
    
	printf("Informe quanto recebe por Hora ");
    scanf("%f", &salarioH);
	
    salarioM = horasT * salarioH;
	
	printf("\nnome: %s\nsexo: %c\nmatricula: %s\n", nome, sexo, matricula);
	
	printf("Horas Trabalhadas: %g\nSalario por Hora: %g\nSalario Mensal: %g", horasT, salarioH, salarioM);
	
	
	
}
