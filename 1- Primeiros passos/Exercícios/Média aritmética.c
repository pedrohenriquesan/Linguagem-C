/*Média aritmética simples
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão de biblioteca de dados

int main () //função principal
{
	float n1, n2, n3, n4, media; //declaração de variáveis
	
	printf ("\nDigite as quatro notas:\n"); 	//saída de dados
	scanf ("%f%f%f%f", &n1, &n2, &n3, &n4);		//entrada de dados
	
	media = (n1 + n2 + n3 + n4)/4; 				//operação
	
	printf ("\nA media e = %0.2f", media);
	
	return 0;
}



