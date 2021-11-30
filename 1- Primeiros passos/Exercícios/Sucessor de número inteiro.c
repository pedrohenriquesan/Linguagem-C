/*Calcular e exibir o sucessor de um número inteiro
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int num;      //declaração de variáveis
	int sucessor; 
	
	printf ("\nDigite um numero inteiro: "); //saída de dados 
	scanf ("%i", &num);				         //entrada de dados 
	
	sucessor = num + 1;						 //operação
	
	printf("\nsucessor de %i: %i", num, sucessor);
	
	return 0;
}
