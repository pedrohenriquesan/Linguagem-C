/*Cálculo da média das notas de 5 alunos com a estrutura de repetição while
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	float nota1, nota2, nota3, media;   //declaração de variáveis 
	int i = 1;							
	
	while (i<=5)                              					 //estrutura de repetição while
	{
		printf ("\nDigite as tres notas do proximo aluno: \n");  //saída de dados
		scanf ("%f%f%f", &nota1, &nota2, &nota3);				 //entrada de dados												 
		media = 0;												 //valor inicial da variável media						 
		media = (nota1 + nota2 + nota3)/3;						 //média aritmética simples
		printf ("\nA media do aluno %d e = %0.2f", i, media);    //saída de resultados
		i++;													 //incremento ao contador
	}
	
	return 0;
}





