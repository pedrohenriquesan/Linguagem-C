/*Fun��es de ntrada e sa�da de dados com  vari�veis
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{      
	char letra;     //declara��o de vari�veis
	int numero;     
	float numero2;  
	  
	printf ("\nEscreva uma letra qualquer: "); //sa�da de dados 
	scanf ("%c", &letra);                      //entrada de dados      
	
	printf ("\nEscreva um numero: ");  
	scanf ("%i", &numero);	
	
	printf ("\nEscreva um numero decimal: ");
	scanf ("%f", &numero2);
 
	printf ("\nLetra escolhida: %c\nNumero escolhido: %i\nSegundo numero escolhido: %0.2f",
	letra, numero, numero2);
	
	return 0;
}





 
