/*M�dia aritm�tica simples
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o de biblioteca de dados

int main () //fun��o principal
{
	float n1, n2, n3, n4, media; //declara��o de vari�veis
	
	printf ("\nDigite as quatro notas:\n"); 	//sa�da de dados
	scanf ("%f%f%f%f", &n1, &n2, &n3, &n4);		//entrada de dados
	
	media = (n1 + n2 + n3 + n4)/4; 				//opera��o
	
	printf ("\nA media e = %0.2f", media);
	
	return 0;
}



