/*Soma de n�meros inteiros sucessivos com a estrutura de decis�o for
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	int i;           //declara��o de vari�veis
	float num;       
	float soma = 0;  
	
	for (i = 0; i <= 3; i++)  //estrutura de repeti��o for
	{
		printf ("\nInforme um numero: "); //sa�da de dados 
		scanf ("%f", &num);				  //entrada de dados 
		soma = soma + num;
		printf ("\nTotal: %0.2f\n", soma);
	}	

	return 0;
}



