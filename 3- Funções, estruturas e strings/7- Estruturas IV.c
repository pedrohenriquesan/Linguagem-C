/*Estruturas aliadas vetores
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h>		//inclus�o da biblioteca de dados stdio.h

int main ()
{
	struct horario		//cria��o do tipo da estrutura trabalhada
	{
		int horas;		//conjunto de vari�veis da estrutura
		int minutos;
		int segundos;
	} teste[5] = {{1,2,3}, {2,3,4}, {3,4,5}, {4,5,6}, {5,6,7}};	
		//declara��o estrutura vetor
		//dando valor aos blocos do vetor
	
	int i;	//vari�vel do ciclo for
	for (i = 0; i < 5; i++)		//ciclo para sa�da de dados do vetor
	{
		printf ("%d, %d, %d\n", teste[i].horas, teste[i].minutos, teste[i].segundos);
	}
	
	return 0;
}


