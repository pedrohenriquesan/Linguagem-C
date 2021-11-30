/*Organizando valores do vetor em ordem crescente
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int vetor[10] = {2,6,5,7,9,3,1,4,8,0};   	//declaração do vetor
	int i; 									 	//declaração da variável do ciclo
	void ordemCrescente (int vetor[], int n);   //declaração da função
	
	ordemCrescente (vetor, 10);					//chamando a função
	
	for (i = 0; i < 10; ++i)					
	{
		printf ("%i", vetor[i]);				//saída de dados
	}
	
	return 0;
}

void ordemCrescente (int vetor[], int n)		//criação da função de ordenacação
{
	int i, j, temporaria;						//declaração de variáveis
	
	for (i = 0; i < n; i++)						//ciclo de comparação dos blocos
	{
		for (j = i + 1; j < n; ++j) 
		{
			if (vetor[i] > vetor[j])
			{
				temporaria = vetor[i];			//trocas de posições de acordo com a condição
				vetor[i] = vetor[j];
				vetor[j] = temporaria;
			}
		}
	}
}

