/*saída de dados das matrizes na linguagem C
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () 	   //função principal da linguagem
{
	int matriz [5] [5] = {{1, 2, 3, 4, 5},          //declaração da matriz
						  {6, 7, 8, 9, 10},
						  {11, 12, 13, 14, 15},
						  {16, 17, 18, 19, 20},
						  {21, 22, 23, 24, 25}};
	
	int m, n;										//declaração de variáveis
	
	for (m=0; m<5; m++) 					//for que controla o número de linhas
	{
		for (n=0; n<5; n++)					//for que controla o número de colunas
		{
			printf ("%i,", matriz[m][n]);
		}
		printf ("\n");
	}
						  
	return 0;
}





