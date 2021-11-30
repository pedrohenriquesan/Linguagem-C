/*C�lculo fatorial com  a estrutura de repeti��o for
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	int fatorial, resposta; //declara��o de vari�veis
	
	resposta = 1;
	
	printf ("\nEscreva um numero inteiro: "); //sa�da de dados
	scanf ("%i", &fatorial);                  //entrada de dados
	
	for ( ; fatorial >= 1; --fatorial)   //fuor
	{
		resposta = resposta * fatorial;  //opera��o aritm�tica
	}
	
	printf ("\nFatorial = %i", resposta);
	
	return 0;
}


