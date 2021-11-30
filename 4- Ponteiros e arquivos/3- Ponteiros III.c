/*Ponteiros direcionados a estruturas
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{      
	struct horario		//criação da estrutura
	{
		int horas;
		int minutos;
		int segundos;
	} agora, *depois;	//declaração da estrutura e do ponteiro
	
	depois = &agora;	//direcionando o ponteiro
	
	(*depois).horas = 20;		//dando valor as variáveis da estrutura com o ponteiro
	(*depois).minutos = 20;
	(*depois).segundos = 20;
	
	//saída de dados
	printf ("%i:%i:%i", agora.horas, agora.minutos, agora.segundos);
	
	return 0;
}






