/*Funções que recebem e enviam estruturas
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

	struct horario 			//criação da estrutura global para ser vistas por todas as funções
	{
		int horas;
		int minutos;
		int segundos;
	};

int main () //função principal da linguagem
{      
	struct horario teste (struct horario x);					//declaração da função 
	
	struct horario agora;										//criação da variavel estrutura do tipo horario						
	agora.horas = 10;											//adição de valor em suas variáveis
	agora.minutos = 42;
	agora.segundos = 58;
	
	struct horario proxima;										//criação de outra variavel estrutura do tipo horario
	proxima = teste(agora);										//a variavel criada assume o valor da função quando a chama
	
	printf ("%i:%i:%i\n", proxima.horas, proxima.minutos, proxima.segundos);
	
	return 0;
}

struct horario teste (struct horario x)							//função do tipo horario que recebe uma estrutura
{
	printf ("%i:%i:%i\n", x.horas, x.minutos, x.segundos);		//saída de dados
	
	x.horas = 100;												//alterando o valor das suas variáveis
	x.minutos = 100;
	x.segundos = 100;
	
	return x;													//retorno da estrutura quando a função é acionada
}


