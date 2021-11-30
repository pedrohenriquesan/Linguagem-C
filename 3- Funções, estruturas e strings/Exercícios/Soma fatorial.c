/*Soma de valores até chegar a 1
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int somar (int num);	//declaração da função de soma
	int num, produto;		//declaração de variáveis
	
	printf ("\nDigite um numero inteiro: ");	//saída de dados
	scanf ("%d", &num);							//entrada de dados
	printf ("\nNumero: %d", num);
	
	produto = somar (num);						//chamando a função
	
	printf ("\nSoma de todos: %d", produto);
	
	return 0;
}

int somar (int x)			//função de soma
{		
	if (x == 1)
	{
		return 1;
	} else
		return x + somar (x - 1);
}


