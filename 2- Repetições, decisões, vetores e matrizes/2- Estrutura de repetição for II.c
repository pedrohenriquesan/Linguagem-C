/*Ciclos dentro de ciclos
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int i, j;	//declaração de variáveis
	
	for (i=1; i<=3; i++)	//ciclo for externo
	{
		printf ("--Volta %i--\n", i);
		for (j=1; j<=5; j++)			//ciclo for interno
		{
			printf ("Ponto %i\n", j);
		}
	}
	return 0;
}


