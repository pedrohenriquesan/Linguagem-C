/*Calcular e exibir o sucessor de um n�mero inteiro
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	int num;      //declara��o de vari�veis
	int sucessor; 
	
	printf ("\nDigite um numero inteiro: "); //sa�da de dados 
	scanf ("%i", &num);				         //entrada de dados 
	
	sucessor = num + 1;						 //opera��o
	
	printf("\nsucessor de %i: %i", num, sucessor);
	
	return 0;
}
