/*Calculo da idade de 3 pessoas
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	int i, anoAtual, anoNasc, idade[2];  //declara��o de vetores e vari�veis
	
	printf ("Digite o ano autal: ");      //sa�da de dados
	scanf ("%i", &anoAtual);			  //entrada de dados
	
	for (i=0; i<=2; i++)				  //fun��o de repeti��o for
	{
		printf ("\nDigite seu ano de nascimento: ");
		scanf ("%i", &anoNasc);
		idade[i] = anoAtual - anoNasc;                           //aplica��o do vetor
		printf ("\nIdade da pessoa [%i] = %i", i, idade[i]);   //sa�da de informa��es do bloco do vetor;
	}

	return 0;
}




