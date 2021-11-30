/*Estruturas aliadas a vetores
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h>	//inclus�o da biblioteca de dados stdio.h

	struct horario	//declara��o da estrutura globall usada
	{
		int horas;
		int minutos;
		int segundos;
	};

int main ()	//fun��o principal da linguagem
{
	void recebe (struct horario lista[5]);			//declara��o das fun��es externas
	void printfHorarios (struct horario lista[5]);	
	
	struct horario lista[5];						//cria��o do vetor do tipo estrutura horario
	
	recebe (lista);									//chamando as fun��es
	printfHorarios (lista);							
	
	return 0;
}

void recebe (struct horario lista[5])				//fun��o que recebe os hor�rios
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf ("Digite o horario %d (hh:mm:ss):", i + 1);
		scanf ("%d:%d:%d", &lista[i].horas, &lista[i].minutos, &lista[i].segundos);
	}
}

void printfHorarios (struct horario lista[5])		//fun��o que mostra os valores
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf ("O %d horario e = %d:%d:%d\n", i + 1, lista[i].horas, lista[i].minutos, lista[i].segundos);
	}
}


