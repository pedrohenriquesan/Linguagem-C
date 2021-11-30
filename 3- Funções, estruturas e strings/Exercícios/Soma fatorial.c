/*Soma de valores at� chegar a 1
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	int somar (int num);	//declara��o da fun��o de soma
	int num, produto;		//declara��o de vari�veis
	
	printf ("\nDigite um numero inteiro: ");	//sa�da de dados
	scanf ("%d", &num);							//entrada de dados
	printf ("\nNumero: %d", num);
	
	produto = somar (num);						//chamando a fun��o
	
	printf ("\nSoma de todos: %d", produto);
	
	return 0;
}

int somar (int x)			//fun��o de soma
{		
	if (x == 1)
	{
		return 1;
	} else
		return x + somar (x - 1);
}


