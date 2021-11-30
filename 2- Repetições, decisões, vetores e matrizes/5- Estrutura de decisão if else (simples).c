/*Estrutura de decisão if else simples
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	float n1, n2, n3, n4, media; //declaração de variáveis
	
	printf ("\nDigite as quatro notas: "); 	//saída de dados
	scanf ("%f%f%f%f", &n1, &n2, &n3, &n4);	//entrada de dados
	
	media = (n1 + n2 + n3 + n4)/4;			//operação
	
	if (media >= 60) {												//if else simples
		printf ("\nA media e = %0.2f, aluno aprovado!", media);
	} else {
		printf ("\nA media e = %0.2f, aluno reprovado!", media);
	}
	
	return 0;
}



