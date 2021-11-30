/*Melhor forma de se usar as estruturas visualmente
Programador: Pedro Henrique Santos Araujo*/

#include <stdio.h>		//inclusão da biblioteca de dados stdio.h

int main ()				//função principal da linguagem
{
	struct horario		//criação do tipo de estrutura trabalhada
	{
		int horas;		//conjunto de variáveis da estrutura
		int minutos;
		int segundos;
	} agora = {10, 20, 30};		//declaração e valoração
	
	printf ("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);	//saída de dados
	
	return 0;
}



