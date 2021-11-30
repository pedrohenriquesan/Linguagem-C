/*Funções que tem como parâmetros matrizes
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int matriz[3][3] = {1,2,3,4,5,6,7,8,9};		//criação da matriz
	
	void funcaoMatriz (int x[][3]);				//declaração da função
	
	funcaoMatriz(matriz);						//chamando a função
	
	return 0;
}

void funcaoMatriz (int x[][3])					//criação da função
{
	int i, j;									//declaração de variáveis
	
	for (i = 0; i < 3; ++i)						//ciclo externo de leitura
	{
		for (j = 0; j < 3; ++j)					//ciclo itnerno de leitura
		{
			printf ("%i", x[i][j]);				//saída de dados
		}
		printf ("\n");
	}
}






