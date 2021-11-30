/*sa�da de dados das matrizes na linguagem C
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () 	   //fun��o principal da linguagem
{
	int matriz [5] [5] = {{1, 2, 3, 4, 5},          //declara��o da matriz
						  {6, 7, 8, 9, 10},
						  {11, 12, 13, 14, 15},
						  {16, 17, 18, 19, 20},
						  {21, 22, 23, 24, 25}};
	
	int m, n;										//declara��o de vari�veis
	
	for (m=0; m<5; m++) 					//for que controla o n�mero de linhas
	{
		for (n=0; n<5; n++)					//for que controla o n�mero de colunas
		{
			printf ("%i,", matriz[m][n]);
		}
		printf ("\n");
	}
						  
	return 0;
}





