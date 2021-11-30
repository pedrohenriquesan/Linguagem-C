/*Ponteiros usados como parâmetros
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{      
	void testeVariavel (int x);		//declaração das funções 
	void testePonteiro (int *px);
	
	int teste = 1;				//variável do ponteiro
	int *pteste = &teste;		//ponteiro
			
	testePonteiro(pteste);		//chamando as funções
	
	printf ("%i\n", *pteste);	//saída de dados
	
	return 0;
}

void testePonteiro (int *px)	//função com o ponteiro
{
	++*px;
}



