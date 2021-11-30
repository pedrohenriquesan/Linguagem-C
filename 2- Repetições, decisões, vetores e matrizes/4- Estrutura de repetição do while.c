/*Somas sucessivas com a estrutura de repeti��o while
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	int contador;    //declara��o de vari�veis
	float num, soma; 
	
	soma = 0;
	
	do {											//ciclo de repeti��o do while
		printf ("\nEscreva un numero qualquer: ");  //sa�da de dados
		scanf ("%f", &num);						    //entrada de dados
		soma = soma + num;						    
		printf ("\nResultado: %0.2f", soma);
		++contador;									
	} while (contador <= 3);
	
	return 0;
}




