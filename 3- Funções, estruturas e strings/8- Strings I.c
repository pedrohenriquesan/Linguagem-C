/*Introdu��o a strings
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{      
	char teste[] = {'b','r','a','s','i','l'};	//cria��o do vetor de caracteres
	int i;										//declara��o de vari�vel
	
	for (i = 0; i < 6; ++i)						//ciclo
	{
		printf ("%c", teste[i]);				//sa�da de dados
	}
	printf ("\n");
	
	return 0;
}



