/*Construa um algoritmo que leia um número inteiro de horas e mostre ao usuário o
correspondente em minutos e segundos destas horas.*/

#include<stdio.h>

int main (){
int hora, minutos, segundos;

printf("digite o horario que deseja converter em horas: ");
scanf("%i", &hora);

minutos = hora * 60;

segundos = hora * 3600;

printf ("minutos = %i\n", minutos);
printf ("segundos = %i", segundos);

}
