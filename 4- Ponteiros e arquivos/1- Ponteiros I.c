/*Introdu��o � ponteiros
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{      
	int x = 10;						//declara��o de vari�vel
	
	int *ponteiro;					//declara��o do ponteiro
	ponteiro = &x;					//vari�vel que o ponteiro aponta
	
	printf ("%d\n", *ponteiro); 	//sa�da de dados (valor)
	printf ("%d\n", ponteiro);		//sa�da de dados (endere�o)
	
	return 0;
}



