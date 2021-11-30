/*Criação e manipulação de arquivos na linguagem C
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	FILE *pont_arquivo;                        		  //criação do ponteiro que aponta para o tipo FILE
	
	pont_arquivo = fopen("6- Arquivos I.txt", "w"); //abrindo/criando o arquivo
	
	fprintf (pont_arquivo,"String 1\nString 2");	  //inserindo/alterando texto no arquivo
		
	fclose(pont_arquivo);					  	      //fechando o arquivo
	
	printf ("Arquivo criado com sucesso!\n"); 		  //mensagem de confirmação (saída de dados)
	
	return 0;
}




