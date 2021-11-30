/*Introdução a strings
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{      
	char teste[] = {'b','r','a','s','i','l'};	//criação do vetor de caracteres
	int i;										//declaração de variável
	
	for (i = 0; i < 6; ++i)						//ciclo
	{
		printf ("%c", teste[i]);				//saída de dados
	}
	printf ("\n");
	
	return 0;
}



