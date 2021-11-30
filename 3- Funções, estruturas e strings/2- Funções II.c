/*Cálculo de área retangular por uma função externa a principal da linguagem
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	float calcularAreaRetang (float base, float altura);   //declaração da função
	
	float area = calcularAreaRetang (10.0, 20.0);          //chamando a função
	
	printf ("\nA area e %0.2f", area);					   //saída de dados
	
	return 0;
}

float calcularAreaRetang (float base, float altura) 	    //criação de função
{
	float area = base * altura;
	
	return area;
}





