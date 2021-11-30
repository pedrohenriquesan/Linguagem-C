/*Estrutura de decisão if else composta
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int idade; //declaração de variável
	
	printf ("\nDigite sua idade: "); 			//saída de dados
	scanf ("%i", &idade);			 			//entrada de dados
	
	if (idade <= 2)                             //if else composta
		printf ("\nVoce e um nenem! ");
	else if (idade >2 && idade <=12)
		printf ("\nVoce e uma crianca!");
	else if (idade >12 && idade <18)
		printf ("\nVoce e um adolescente!");
	else if (idade >=18 && idade <=65)
		printf ("\nVoce e um adulto!");
	else 	
		printf ("\nVoce e um idoso(a)");
		
	return 0;
}



