/*C�lculo da m�dia das notas de 5 alunos com a estrutura de repeti��o while
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	float nota1, nota2, nota3, media;   //declara��o de vari�veis 
	int i = 1;							
	
	while (i<=5)                              					 //estrutura de repeti��o while
	{
		printf ("\nDigite as tres notas do proximo aluno: \n");  //sa�da de dados
		scanf ("%f%f%f", &nota1, &nota2, &nota3);				 //entrada de dados												 
		media = 0;												 //valor inicial da vari�vel media						 
		media = (nota1 + nota2 + nota3)/3;						 //m�dia aritm�tica simples
		printf ("\nA media do aluno %d e = %0.2f", i, media);    //sa�da de resultados
		i++;													 //incremento ao contador
	}
	
	return 0;
}





