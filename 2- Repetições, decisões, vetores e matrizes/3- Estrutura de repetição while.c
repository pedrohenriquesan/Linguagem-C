/*Somas sucessivas com a estrutura de repeti��o while
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	int contador = 0; //declara��o de vari�veis
	float num, soma;  
	
	soma = 0;         
	
	while (contador <=3) 	//fun��o while 
	{
		printf ("\nDigite um numero: ");	 //sa�da de dados 
	    scanf ("%f", &num);					 //entrada de dados 
	    soma = soma + num;
	    printf ("\nResultado: %0.2f", soma);
		++contador;	 
	} 
	
	return 0;
}



