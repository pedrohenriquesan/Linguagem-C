/*Somando e invertendo valores negativos (se necessário) dois números inteiros
Programador: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	float somaNumeros (float num1, float num2);    //declarando a função de soma
	float a, b, soma;
	
	printf ("\nDigite dois valores inteiros: ");   //entrada de dados
	scanf ("%f%f", &a,&b);						   //saída de dados
	
	soma = somaNumeros(a,b);					   //chamando a função de soma
	
	printf ("\nSoma: %0.2f\n", soma);
	
	system ("pause");								//pausa o processo
	return 0;
}

float somaNumeros (float num1, float num2)         //função que soma os números 
{
	float inverte (float x);					   //declarando a função de inversão
	
	if (num1 < 0 )								   //estrutura de decisão que confirma se há número negativo
	{									
		num1 = inverte (num1);					   //chamando a função de inversão
	} 
	if (num2 < 0){
		num2 = inverte (num2);					   //chamando a função de inversão
	}
		
	return num1 + num2;
}

float inverte (float x)                            //função de inversão de sinal
{
	return x * -1;
}
