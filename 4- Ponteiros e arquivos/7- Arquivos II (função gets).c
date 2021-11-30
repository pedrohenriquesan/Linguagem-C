/*Cria��o e manipula��o de arquivos na linguagem C
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	FILE *ponteiro;										//cria��o do ponteiro que aponta para o tipo FILE
	ponteiro = fopen("6- Arquivos I.txt", "r");       //abrindo/criando o arquivo
	
	if (ponteiro == NULL)								//verificando se o arquivo existe
	{
		printf ("Esse arquivo n�o est� dispon�vel.\n");
		exit(0);										//mata o c�digo (fecha o programa)
	}
	
	char nomes [100];									//cria��o do vetor que armazena as strings 
																
	while (fgets(nomes, 100, ponteiro) != NULL)         //ciclo de repeti��o while)
	{
		printf ("%s", nomes);
	}
	
	fclose(ponteiro);									//fechando o arquivo
	
	return 0;
}



