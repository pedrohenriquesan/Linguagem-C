/*Melhor forma de se usar as estruturas visualmente
Programador: Pedro Henrique Santos Araujo*/

#include <stdio.h>		//inclus�o da biblioteca de dados stdio.h

int main ()				//fun��o principal da linguagem
{
	struct horario		//cria��o do tipo de estrutura trabalhada
	{
		int horas;		//conjunto de vari�veis da estrutura
		int minutos;
		int segundos;
	} agora = {10, 20, 30};		//declara��o e valora��o
	
	printf ("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);	//sa�da de dados
	
	return 0;
}



