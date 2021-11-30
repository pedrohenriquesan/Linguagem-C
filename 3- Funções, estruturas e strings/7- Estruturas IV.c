/*Estruturas aliadas vetores
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h>		//inclusão da biblioteca de dados stdio.h

int main ()
{
	struct horario		//criação do tipo da estrutura trabalhada
	{
		int horas;		//conjunto de variáveis da estrutura
		int minutos;
		int segundos;
	} teste[5] = {{1,2,3}, {2,3,4}, {3,4,5}, {4,5,6}, {5,6,7}};	
		//declaração estrutura vetor
		//dando valor aos blocos do vetor
	
	int i;	//variável do ciclo for
	for (i = 0; i < 5; i++)		//ciclo para saída de dados do vetor
	{
		printf ("%d, %d, %d\n", teste[i].horas, teste[i].minutos, teste[i].segundos);
	}
	
	return 0;
}


