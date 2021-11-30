/*Verificando tipo de caractere
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{   
	void alfabeto (char variavel);		//declaração da função
   
	char nome[20];						//vetor de caracteres
	printf ("Digite uma palavra: ");	//saída de dados
	scanf ("%s", &nome);				//entrada de dados
	
	int i = 0;							//variável do ciclo while
	while (nome[i] != '\0')
	{
		alfabeto(nome[i]);				//chamando a função
		++i;
	}
	
	return 0;
}

void alfabeto (char variavel)			//criando a função
{
	if (variavel >= 'a' && variavel <= 'z' || variavel >= 'A' && variavel <= 'Z')
	//condição utilizando operadores lógicos associados com as letras do alfabeto
	{
		printf ("e uma letra\n");		//saída de dados
	} else 
		printf ("nao e uma letra\n"); 	//saída de dados
}




