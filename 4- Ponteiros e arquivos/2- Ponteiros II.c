/*Introdu��o � ponteiros
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{      
	int x = 10;			//declara��o de vari�veis
	double y = 20.50;
	char z = 'a';
	
	int *px = &x;		//declara��o de ponteiros
	double *py = &y;
	char *pz = &z;

	//sa�da de dados (endere�o e valor)
	printf ("\nEndereco de x = %i e o valor de x = %i", px, *px);
	printf ("\nEndereco de y = %i e o valor de y = %lf", py, *py);
	printf ("\nEndereco de z = %i e o valor de z = %c", pz, *pz);
	
	return 0;
}


