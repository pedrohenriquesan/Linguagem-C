/*Calculando m�dia de 5 alunos com uso de vetor
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	float nota[5] = {0};   //declara��o do vetor
	float soma, media;     //declara��o de vari�veis
	int i;				  
	
	printf ("\nInforme as 5 notas:\n");	//sa�da de dados
    
    for (i=0; i<5; i++)					//estrutura de repeti��o 
    {									
    	scanf ("%f", &nota[i]);         //entrada de dados
	}
	
	soma = 0;
	
	for (i=0; i<5; i++)					//estrutura de repeti��o que soma as notas informadas
	{
		soma += nota[i];                //opera��o de soma entre os blocos do vetor
	}
	
	media = soma / 5;					//express�o aritm�tica 
	printf ("\nA media do aluno foi de %0.2f pontos", media);	
	
	return 0;
}





