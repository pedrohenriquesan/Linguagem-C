/*Estrutura de decis�o if else simples
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	float n1, n2, n3, n4, media; //declara��o de vari�veis
	
	printf ("\nDigite as quatro notas: "); 	//sa�da de dados
	scanf ("%f%f%f%f", &n1, &n2, &n3, &n4);	//entrada de dados
	
	media = (n1 + n2 + n3 + n4)/4;			//opera��o
	
	if (media >= 60) {												//if else simples
		printf ("\nA media e = %0.2f, aluno aprovado!", media);
	} else {
		printf ("\nA media e = %0.2f, aluno reprovado!", media);
	}
	
	return 0;
}



