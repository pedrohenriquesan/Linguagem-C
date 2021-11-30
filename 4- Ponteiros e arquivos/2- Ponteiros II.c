/*Introdução à ponteiros
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{      
	int x = 10;			//declaração de variáveis
	double y = 20.50;
	char z = 'a';
	
	int *px = &x;		//declaração de ponteiros
	double *py = &y;
	char *pz = &z;

	//saída de dados (endereço e valor)
	printf ("\nEndereco de x = %i e o valor de x = %i", px, *px);
	printf ("\nEndereco de y = %i e o valor de y = %lf", py, *py);
	printf ("\nEndereco de z = %i e o valor de z = %c", pz, *pz);
	
	return 0;
}


