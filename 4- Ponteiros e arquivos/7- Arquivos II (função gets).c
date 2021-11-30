/*Criação e manipulação de arquivos na linguagem C
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	FILE *ponteiro;										//criação do ponteiro que aponta para o tipo FILE
	ponteiro = fopen("6- Arquivos I.txt", "r");       //abrindo/criando o arquivo
	
	if (ponteiro == NULL)								//verificando se o arquivo existe
	{
		printf ("Esse arquivo não está disponível.\n");
		exit(0);										//mata o código (fecha o programa)
	}
	
	char nomes [100];									//criação do vetor que armazena as strings 
																
	while (fgets(nomes, 100, ponteiro) != NULL)         //ciclo de repetição while)
	{
		printf ("%s", nomes);
	}
	
	fclose(ponteiro);									//fechando o arquivo
	
	return 0;
}



