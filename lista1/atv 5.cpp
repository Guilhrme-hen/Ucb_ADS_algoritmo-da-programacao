/*Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a
quantidade de metros avulsos de fios que ele precisa adquirir. Sabe-se que o
construtor tem a quantidade total de fios em metros a serem utilizados na instalação
elétrica da obra e que cada rolo de fio tem 50 metros.*/

#include<stdio.h>
int main(){;
	int metrosdefio, metrosavulso, rolos;
	
	printf ("digite quantos metros precisa: ");
	
	scanf ("%i", &metrosdefio);
	
	rolos = (metrosdefio/50);
	
	metrosavulso = (metrosdefio % 50);
	
	printf ("Vai usar %i rolo(s) \nE %i de metros avulso",rolos, metrosavulso);
           
  }
