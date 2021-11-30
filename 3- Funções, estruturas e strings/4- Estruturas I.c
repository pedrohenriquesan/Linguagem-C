/*Introdução a estruturas na linguagem C
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{      
	struct horario			//criação do "tipo" da estrutura
	{
		int horas;
		int minutos;
		int segundos;
		double teste;
		char letra;
	};
	
	struct horario agora;	//declaração da estrutura
	
	agora.horas = 10;  		//dando valores as variáveis dentro da estrutura
	agora.minutos = 53;
	agora.segundos = 30;
	
	struct horario depois;	//variável do tipo estrutura horario
	
	depois.horas = agora.horas + 10;
	depois.minutos = agora.minutos;
	depois.teste = 56.89 / 4569;
	depois.letra = 'C';
	
	printf ("%i\n%i\n%lf\n%c\n", depois.horas, depois.minutos, depois.teste, depois.letra);	  //saída de dados 
		
	return 0;
}



