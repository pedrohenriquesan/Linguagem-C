/*Ponteiros direcionados a estruturas
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{      
	struct horario		//cria��o da estrutura
	{
		int horas;
		int minutos;
		int segundos;
	} agora, *depois;	//declara��o da estrutura e do ponteiro
	
	depois = &agora;	//direcionando o ponteiro
	
	(*depois).horas = 20;		//dando valor as vari�veis da estrutura com o ponteiro
	(*depois).minutos = 20;
	(*depois).segundos = 20;
	
	//sa�da de dados
	printf ("%i:%i:%i", agora.horas, agora.minutos, agora.segundos);
	
	return 0;
}






