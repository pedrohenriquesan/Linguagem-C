/*Introdu��o a estruturas na linguagem C
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{      
	struct horario			//cria��o do "tipo" da estrutura
	{
		int horas;
		int minutos;
		int segundos;
		double teste;
		char letra;
	};
	
	struct horario agora;	//declara��o da estrutura
	
	agora.horas = 10;  		//dando valores as vari�veis dentro da estrutura
	agora.minutos = 53;
	agora.segundos = 30;
	
	struct horario depois;	//vari�vel do tipo estrutura horario
	
	depois.horas = agora.horas + 10;
	depois.minutos = agora.minutos;
	depois.teste = 56.89 / 4569;
	depois.letra = 'C';
	
	printf ("%i\n%i\n%lf\n%c\n", depois.horas, depois.minutos, depois.teste, depois.letra);	  //sa�da de dados 
		
	return 0;
}



