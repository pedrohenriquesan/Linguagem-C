/*Soma de números inteiros sucessivos com a estrutura de decisão for
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int i;           //declaração de variáveis
	float num;       
	float soma = 0;  
	
	for (i = 0; i <= 3; i++)  //estrutura de repetição for
	{
		printf ("\nInforme um numero: "); //saída de dados 
		scanf ("%f", &num);				  //entrada de dados 
		soma = soma + num;
		printf ("\nTotal: %0.2f\n", soma);
	}	

	return 0;
}



