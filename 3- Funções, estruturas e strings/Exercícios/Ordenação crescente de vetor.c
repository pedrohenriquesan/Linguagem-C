/*Organizando valores do vetor em ordem crescente
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	int vetor[10] = {2,6,5,7,9,3,1,4,8,0};   	//declara��o do vetor
	int i; 									 	//declara��o da vari�vel do ciclo
	void ordemCrescente (int vetor[], int n);   //declara��o da fun��o
	
	ordemCrescente (vetor, 10);					//chamando a fun��o
	
	for (i = 0; i < 10; ++i)					
	{
		printf ("%i", vetor[i]);				//sa�da de dados
	}
	
	return 0;
}

void ordemCrescente (int vetor[], int n)		//cria��o da fun��o de ordenaca��o
{
	int i, j, temporaria;						//declara��o de vari�veis
	
	for (i = 0; i < n; i++)						//ciclo de compara��o dos blocos
	{
		for (j = i + 1; j < n; ++j) 
		{
			if (vetor[i] > vetor[j])
			{
				temporaria = vetor[i];			//trocas de posi��es de acordo com a condi��o
				vetor[i] = vetor[j];
				vetor[j] = temporaria;
			}
		}
	}
}

