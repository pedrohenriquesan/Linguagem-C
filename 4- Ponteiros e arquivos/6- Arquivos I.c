/*Cria��o e manipula��o de arquivos na linguagem C
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	FILE *pont_arquivo;                        		  //cria��o do ponteiro que aponta para o tipo FILE
	
	pont_arquivo = fopen("6- Arquivos I.txt", "w"); //abrindo/criando o arquivo
	
	fprintf (pont_arquivo,"String 1\nString 2");	  //inserindo/alterando texto no arquivo
		
	fclose(pont_arquivo);					  	      //fechando o arquivo
	
	printf ("Arquivo criado com sucesso!\n"); 		  //mensagem de confirma��o (sa�da de dados)
	
	return 0;
}




