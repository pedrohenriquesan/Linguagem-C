/*Modos de declarar e inicializar strings
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{      
	//OUTRAS FORMAS:
	//char palavra[6] = {'B', 'r', 'a', 's', 'i', 'l'};
	//char palavra[] = {'B', 'r', 'a', 's', 'i', 'l'};
	//char palavra[7] = {"Brasil"};
	//char palavra[] = {"Brasil"};
	char palavra[] = "Brasil";
	
	printf ("%s\n", palavra);
	
	return 0;
}


