/*Matrizes na linguagem C
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () 	   //função principal da linguagem
{
	int matriz [3][3] = {{1, 2, 3},    //declaração de matriz
						 {4, 5, 6},
						 {7, 8, 9}};
	//a matriz acima pode ser declarada desse modo: = {1, 2, 3, 4, 5, 6, 7, 8, 9}
						 
	printf ("%i", matriz[2][1]); 	   //saída de dados da matriz declarada
	
	return 0;
}




