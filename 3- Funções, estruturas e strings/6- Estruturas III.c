/*Fun��es que recebem e enviam estruturas
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

	struct horario 			//cria��o da estrutura global para ser vistas por todas as fun��es
	{
		int horas;
		int minutos;
		int segundos;
	};

int main () //fun��o principal da linguagem
{      
	struct horario teste (struct horario x);					//declara��o da fun��o 
	
	struct horario agora;										//cria��o da variavel estrutura do tipo horario						
	agora.horas = 10;											//adi��o de valor em suas vari�veis
	agora.minutos = 42;
	agora.segundos = 58;
	
	struct horario proxima;										//cria��o de outra variavel estrutura do tipo horario
	proxima = teste(agora);										//a variavel criada assume o valor da fun��o quando a chama
	
	printf ("%i:%i:%i\n", proxima.horas, proxima.minutos, proxima.segundos);
	
	return 0;
}

struct horario teste (struct horario x)							//fun��o do tipo horario que recebe uma estrutura
{
	printf ("%i:%i:%i\n", x.horas, x.minutos, x.segundos);		//sa�da de dados
	
	x.horas = 100;												//alterando o valor das suas vari�veis
	x.minutos = 100;
	x.segundos = 100;
	
	return x;													//retorno da estrutura quando a fun��o � acionada
}


