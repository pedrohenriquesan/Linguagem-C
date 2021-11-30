/*saída de dados dos vetores na linguagem C
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main (void)    //função principal da linguagem
{
	int i;  //deckaração de variável
	
	int nota[5] ={11, 5, 7, 6, 2};   //declaração do vetor
	
	for (i = 0; i<=5 ; i++)          //automatizando a saída de todos os blocos
	{
		printf ("%i\n", nota[i]);
	}
	
	return 0;
}


