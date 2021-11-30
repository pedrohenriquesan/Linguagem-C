/*Ponteiros dentro de estruturas
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{      
	struct horario			//cria��o da estrutura com ponteiros
	{
		int *phora;			//ponteiros da estrutura
		int *pminuto;
		int *psegundo;
	};
	
	struct horario hoje;	//declra��o da estrutura criada
	
	int hora = 200;			//vari�veis que os ponteiros da estrutura v�o usar
	int minuto = 300;
	int segundo = 400;
	
	hoje.phora = &hora;			//indica��o da vari�vel para os ponteiros
	hoje.pminuto = &minuto;
	hoje.psegundo = &segundo;
	
	printf ("Hora - %i\n", *hoje.phora);		//sa�da de dados
	printf ("Minuto - %i\n", *hoje.pminuto);
	printf ("Segundo - %i\n", *hoje.psegundo);
	
	return 0;
}



