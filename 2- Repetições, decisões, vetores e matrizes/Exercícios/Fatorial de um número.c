/*Cálculo fatorial com  a estrutura de repetição for
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int fatorial, resposta; //declaração de variáveis
	
	resposta = 1;
	
	printf ("\nEscreva um numero inteiro: "); //saída de dados
	scanf ("%i", &fatorial);                  //entrada de dados
	
	for ( ; fatorial >= 1; --fatorial)   //fuor
	{
		resposta = resposta * fatorial;  //operação aritmética
	}
	
	printf ("\nFatorial = %i", resposta);
	
	return 0;
}


