/*sa�da de dados dos vetores na linguagem C
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main (void)    //fun��o principal da linguagem
{
	int i;  //deckara��o de vari�vel
	
	int nota[5] ={11, 5, 7, 6, 2};   //declara��o do vetor
	
	for (i = 0; i<=5 ; i++)          //automatizando a sa�da de todos os blocos
	{
		printf ("%i\n", nota[i]);
	}
	
	return 0;
}


