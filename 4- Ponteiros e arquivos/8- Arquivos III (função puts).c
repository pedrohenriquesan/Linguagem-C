/*Editando arquivos na linguagem C
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	FILE *ponteiro;										//criação do ponteiro que aponta para o tipo FILE
	ponteiro = fopen("6- Arquivos I.txt", "a");         //abrindo/criando o arquivo
	
	if (ponteiro == NULL)								//verificando se o arquivo existe
	{
		printf ("Esse arquivo não está disponível.\n");
	}
	
	fprintf (ponteiro, "\nPrimeira");			    	//adiciona ao arquivo 1;
	
	char nome[] = ("\nSegunda\n");					
	fputs (nome, ponteiro);								//adiciona string ao arquivo 1;
	
	char caractere = '3';
	fputc (caractere, ponteiro);						//adiciona caractere ao arquivo 1;
	
	printf ("\nAdionados com sucesso!");				//saída de dados
	
	fclose (ponteiro);
	
	return 0;
}




