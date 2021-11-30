/*Estruturas aliadas a vetores
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h>	//inclusão da biblioteca de dados stdio.h

	struct horario	//declaração da estrutura globall usada
	{
		int horas;
		int minutos;
		int segundos;
	};

int main ()	//função principal da linguagem
{
	void recebe (struct horario lista[5]);			//declaração das funções externas
	void printfHorarios (struct horario lista[5]);	
	
	struct horario lista[5];						//criação do vetor do tipo estrutura horario
	
	recebe (lista);									//chamando as funções
	printfHorarios (lista);							
	
	return 0;
}

void recebe (struct horario lista[5])				//função que recebe os horários
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf ("Digite o horario %d (hh:mm:ss):", i + 1);
		scanf ("%d:%d:%d", &lista[i].horas, &lista[i].minutos, &lista[i].segundos);
	}
}

void printfHorarios (struct horario lista[5])		//função que mostra os valores
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf ("O %d horario e = %d:%d:%d\n", i + 1, lista[i].horas, lista[i].minutos, lista[i].segundos);
	}
}


