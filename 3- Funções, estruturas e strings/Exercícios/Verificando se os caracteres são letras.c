/*Verificando tipo de caractere
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{   
	void alfabeto (char variavel);		//declara��o da fun��o
   
	char nome[20];						//vetor de caracteres
	printf ("Digite uma palavra: ");	//sa�da de dados
	scanf ("%s", &nome);				//entrada de dados
	
	int i = 0;							//vari�vel do ciclo while
	while (nome[i] != '\0')
	{
		alfabeto(nome[i]);				//chamando a fun��o
		++i;
	}
	
	return 0;
}

void alfabeto (char variavel)			//criando a fun��o
{
	if (variavel >= 'a' && variavel <= 'z' || variavel >= 'A' && variavel <= 'Z')
	//condi��o utilizando operadores l�gicos associados com as letras do alfabeto
	{
		printf ("e uma letra\n");		//sa�da de dados
	} else 
		printf ("nao e uma letra\n"); 	//sa�da de dados
}




