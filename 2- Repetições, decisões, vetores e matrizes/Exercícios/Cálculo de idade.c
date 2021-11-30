/*Calculo da idade de 3 pessoas
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int i, anoAtual, anoNasc, idade[2];  //declaração de vetores e variáveis
	
	printf ("Digite o ano autal: ");      //saída de dados
	scanf ("%i", &anoAtual);			  //entrada de dados
	
	for (i=0; i<=2; i++)				  //função de repetição for
	{
		printf ("\nDigite seu ano de nascimento: ");
		scanf ("%i", &anoNasc);
		idade[i] = anoAtual - anoNasc;                           //aplicação do vetor
		printf ("\nIdade da pessoa [%i] = %i", i, idade[i]);   //saída de informações do bloco do vetor;
	}

	return 0;
}




