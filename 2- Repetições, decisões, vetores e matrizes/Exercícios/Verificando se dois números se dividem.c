/*Verificando se dois numeros se dividem com a estrutura de decis�o if else
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	int num, num1, resto; //declara��o de vari�veis
	
	printf ("Escreva um numero inteiro: ");     //sa�da de dados
	scanf ("%i", &num);							//entrada de dados
	printf ("Escreva outro numero intreiro: ");
	scanf ("%i", &num1);
	
	resto = num % num1; //opera��o de resto
	
	if (resto == 0)                                       //estrutura de decis�o
		printf ("%i e divisivel por %i", num, num1);
	else 
		printf ("%i nao e divisivel por %i", num, num1);
		
	return 0;
}


