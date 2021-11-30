/*Somas sucessivas com a estrutura de repetição while
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int contador = 0; //declaração de variáveis
	float num, soma;  
	
	soma = 0;         
	
	while (contador <=3) 	//função while 
	{
		printf ("\nDigite um numero: ");	 //saída de dados 
	    scanf ("%f", &num);					 //entrada de dados 
	    soma = soma + num;
	    printf ("\nResultado: %0.2f", soma);
		++contador;	 
	} 
	
	return 0;
}



