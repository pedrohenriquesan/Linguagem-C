/*Somas sucessivas com a estrutura de repetição while
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int contador;    //declaração de variáveis
	float num, soma; 
	
	soma = 0;
	
	do {											//ciclo de repetição do while
		printf ("\nEscreva un numero qualquer: ");  //saída de dados
		scanf ("%f", &num);						    //entrada de dados
		soma = soma + num;						    
		printf ("\nResultado: %0.2f", soma);
		++contador;									
	} while (contador <= 3);
	
	return 0;
}




