/*Ciclos dentro de ciclos
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	int i, j;	//declara��o de vari�veis
	
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


