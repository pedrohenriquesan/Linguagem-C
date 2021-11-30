/*Cálculo do fatorial de um número utilizando recursividade
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int numeroFatorial (int num);  					   //declaração da função fatorial
	int numero, fatorial;							   //declaração de variáveis
	
	printf ("\nDigite um numero inteiro:\n");		   //saída de dados
	scanf ("%i", &numero);							   //entrada de dados
	printf ("Numero: %i", numero);
	
	fatorial = numeroFatorial (numero);				   //chamando a função fatorial
	
	printf ("\nFatorial: %i", fatorial);			   //saída de resultados
	
	return 0;
}

int numeroFatorial (int num)                            //função que calcula fatorial
{
	int fatorial;										//declaração de variável
		
	if (num == 0 || num == 1)							//estrutura de decisão
	{
		fatorial = 1;									//por definição fatorial 0 = 1
	} else {
		fatorial = num * numeroFatorial (num -1);       //função recursiva (chamando a si mesma)
	}
	
	return fatorial;									//retorna para a função main o fatorial
}



