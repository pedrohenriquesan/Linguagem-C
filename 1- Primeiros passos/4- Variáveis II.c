/*Principais vari�veis da linguagem
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	char variavelChar;
	printf ("Escreva um caractere: ");
	scanf ("%c", &variavelChar);
	printf ("%c", variavelChar);
	
	int variavelInt;        
	printf ("\nEscreva um numero inteiro: ");
	scanf ("%i", &variavelInt);
	printf ("%i", variavelInt);
	//existem vari���es do tipo inteiro:
		//const int (valor inteiro constante)
		//long int (valor inteiro com mais d�gitos)
	
	float variavelFloat;    
	printf ("\nEscreva um numero decimal: ");
	scanf ("%f", &variavelFloat);
	printf ("%0.2f", variavelFloat);
	//existem vari���es do tipo float(reais):
		//const float (valor real constante)
	
	double variavelDouble;    
	printf ("\nEscreva um numero decimal: ");
	scanf ("%lf", &variavelDouble);
	printf ("%lf", variavelDouble);
	
	return 0;
}


