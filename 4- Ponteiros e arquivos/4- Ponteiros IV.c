/*Ponteiros dentro de estruturas
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{      
	struct horario			//criação da estrutura com ponteiros
	{
		int *phora;			//ponteiros da estrutura
		int *pminuto;
		int *psegundo;
	};
	
	struct horario hoje;	//declração da estrutura criada
	
	int hora = 200;			//variáveis que os ponteiros da estrutura vão usar
	int minuto = 300;
	int segundo = 400;
	
	hoje.phora = &hora;			//indicação da variável para os ponteiros
	hoje.pminuto = &minuto;
	hoje.psegundo = &segundo;
	
	printf ("Hora - %i\n", *hoje.phora);		//saída de dados
	printf ("Minuto - %i\n", *hoje.pminuto);
	printf ("Segundo - %i\n", *hoje.psegundo);
	
	return 0;
}



