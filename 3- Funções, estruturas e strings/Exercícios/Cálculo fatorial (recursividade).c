/*C�lculo do fatorial de um n�mero utilizando recursividade
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	int numeroFatorial (int num);  					   //declara��o da fun��o fatorial
	int numero, fatorial;							   //declara��o de vari�veis
	
	printf ("\nDigite um numero inteiro:\n");		   //sa�da de dados
	scanf ("%i", &numero);							   //entrada de dados
	printf ("Numero: %i", numero);
	
	fatorial = numeroFatorial (numero);				   //chamando a fun��o fatorial
	
	printf ("\nFatorial: %i", fatorial);			   //sa�da de resultados
	
	return 0;
}

int numeroFatorial (int num)                            //fun��o que calcula fatorial
{
	int fatorial;										//declara��o de vari�vel
		
	if (num == 0 || num == 1)							//estrutura de decis�o
	{
		fatorial = 1;									//por defini��o fatorial 0 = 1
	} else {
		fatorial = num * numeroFatorial (num -1);       //fun��o recursiva (chamando a si mesma)
	}
	
	return fatorial;									//retorna para a fun��o main o fatorial
}



