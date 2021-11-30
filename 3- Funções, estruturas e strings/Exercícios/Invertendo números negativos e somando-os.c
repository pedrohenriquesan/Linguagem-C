/*Somando e invertendo valores negativos (se necess�rio) dois n�meros inteiros
Programador: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	float somaNumeros (float num1, float num2);    //declarando a fun��o de soma
	float a, b, soma;
	
	printf ("\nDigite dois valores inteiros: ");   //entrada de dados
	scanf ("%f%f", &a,&b);						   //sa�da de dados
	
	soma = somaNumeros(a,b);					   //chamando a fun��o de soma
	
	printf ("\nSoma: %0.2f\n", soma);
	
	system ("pause");								//pausa o processo
	return 0;
}

float somaNumeros (float num1, float num2)         //fun��o que soma os n�meros 
{
	float inverte (float x);					   //declarando a fun��o de invers�o
	
	if (num1 < 0 )								   //estrutura de decis�o que confirma se h� n�mero negativo
	{									
		num1 = inverte (num1);					   //chamando a fun��o de invers�o
	} 
	if (num2 < 0){
		num2 = inverte (num2);					   //chamando a fun��o de invers�o
	}
		
	return num1 + num2;
}

float inverte (float x)                            //fun��o de invers�o de sinal
{
	return x * -1;
}
