/*Contagem de caracteres de uma string
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{      
	int tamanho (char string[]);		//declaração da função
	char nomeUsuario[20];				//declaração do vetor da string
	
	printf ("Insira seu nome:\n");		//saída de dados
	scanf ("%s", nomeUsuario);			//entrada de dados
		
	int num  = tamanho(nomeUsuario);	//chamando a função
	
	printf ("Seu nome possui %d caracteres", num);	//saída de dados
	
	return 0;
}

int tamanho (char string[])				//criação da função
{
	int numCaracteres = 0;				//variável do ciclo while
	
	while (string[numCaracteres] != '\0')
	{
		++numCaracteres;				//contagem dos caracteres
	}
	
	return numCaracteres;
}


