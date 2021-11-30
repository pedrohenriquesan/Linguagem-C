/*Ponteiros usados como par�metros
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{      
	void testeVariavel (int x);		//declara��o das fun��es 
	void testePonteiro (int *px);
	
	int teste = 1;				//vari�vel do ponteiro
	int *pteste = &teste;		//ponteiro
			
	testePonteiro(pteste);		//chamando as fun��es
	
	printf ("%i\n", *pteste);	//sa�da de dados
	
	return 0;
}

void testePonteiro (int *px)	//fun��o com o ponteiro
{
	++*px;
}



