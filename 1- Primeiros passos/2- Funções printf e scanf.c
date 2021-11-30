/*Funções de ntrada e saída de dados com  variáveis
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{      
	char letra;     //declaração de variáveis
	int numero;     
	float numero2;  
	  
	printf ("\nEscreva uma letra qualquer: "); //saída de dados 
	scanf ("%c", &letra);                      //entrada de dados      
	
	printf ("\nEscreva um numero: ");  
	scanf ("%i", &numero);	
	
	printf ("\nEscreva um numero decimal: ");
	scanf ("%f", &numero2);
 
	printf ("\nLetra escolhida: %c\nNumero escolhido: %i\nSegundo numero escolhido: %0.2f",
	letra, numero, numero2);
	
	return 0;
}





 
