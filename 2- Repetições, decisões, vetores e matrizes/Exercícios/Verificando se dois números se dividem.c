/*Verificando se dois numeros se dividem com a estrutura de decisão if else
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int num, num1, resto; //declaração de variáveis
	
	printf ("Escreva um numero inteiro: ");     //saída de dados
	scanf ("%i", &num);							//entrada de dados
	printf ("Escreva outro numero intreiro: ");
	scanf ("%i", &num1);
	
	resto = num % num1; //operação de resto
	
	if (resto == 0)                                       //estrutura de decisão
		printf ("%i e divisivel por %i", num, num1);
	else 
		printf ("%i nao e divisivel por %i", num, num1);
		
	return 0;
}


