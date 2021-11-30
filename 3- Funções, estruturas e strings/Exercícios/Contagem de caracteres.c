/*Contagem de caracteres de uma string
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{      
	int tamanho (char string[]);		//declara��o da fun��o
	char nomeUsuario[20];				//declara��o do vetor da string
	
	printf ("Insira seu nome:\n");		//sa�da de dados
	scanf ("%s", nomeUsuario);			//entrada de dados
		
	int num  = tamanho(nomeUsuario);	//chamando a fun��o
	
	printf ("Seu nome possui %d caracteres", num);	//sa�da de dados
	
	return 0;
}

int tamanho (char string[])				//cria��o da fun��o
{
	int numCaracteres = 0;				//vari�vel do ciclo while
	
	while (string[numCaracteres] != '\0')
	{
		++numCaracteres;				//contagem dos caracteres
	}
	
	return numCaracteres;
}


