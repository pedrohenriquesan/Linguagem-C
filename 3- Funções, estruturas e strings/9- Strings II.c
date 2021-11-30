/*Lendo strings
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{      
	char nome[100] = {'P','e','d','r','o',' ','H','e','n','r','i','q','u','e'};	//string
	int i;
	
	for (i = 0; i <= 15; i++)
		printf ("%c", nome[i]);
	
	return 0;
}


