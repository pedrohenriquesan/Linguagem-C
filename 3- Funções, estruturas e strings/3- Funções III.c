/*Fun��es que tem como par�metros matrizes
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	int matriz[3][3] = {1,2,3,4,5,6,7,8,9};		//cria��o da matriz
	
	void funcaoMatriz (int x[][3]);				//declara��o da fun��o
	
	funcaoMatriz(matriz);						//chamando a fun��o
	
	return 0;
}

void funcaoMatriz (int x[][3])					//cria��o da fun��o
{
	int i, j;									//declara��o de vari�veis
	
	for (i = 0; i < 3; ++i)						//ciclo externo de leitura
	{
		for (j = 0; j < 3; ++j)					//ciclo itnerno de leitura
		{
			printf ("%i", x[i][j]);				//sa�da de dados
		}
		printf ("\n");
	}
}






