/*C�lculo de �rea retangular por uma fun��o externa a principal da linguagem
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	float calcularAreaRetang (float base, float altura);   //declara��o da fun��o
	
	float area = calcularAreaRetang (10.0, 20.0);          //chamando a fun��o
	
	printf ("\nA area e %0.2f", area);					   //sa�da de dados
	
	return 0;
}

float calcularAreaRetang (float base, float altura) 	    //cria��o de fun��o
{
	float area = base * altura;
	
	return area;
}





