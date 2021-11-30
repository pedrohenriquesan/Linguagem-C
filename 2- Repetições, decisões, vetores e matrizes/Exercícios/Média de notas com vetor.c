/*Calculando média de 5 alunos com uso de vetor
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	float nota[5] = {0};   //declaração do vetor
	float soma, media;     //declaração de variáveis
	int i;				  
	
	printf ("\nInforme as 5 notas:\n");	//saída de dados
    
    for (i=0; i<5; i++)					//estrutura de repetição 
    {									
    	scanf ("%f", &nota[i]);         //entrada de dados
	}
	
	soma = 0;
	
	for (i=0; i<5; i++)					//estrutura de repetição que soma as notas informadas
	{
		soma += nota[i];                //operação de soma entre os blocos do vetor
	}
	
	media = soma / 5;					//expressão aritmética 
	printf ("\nA media do aluno foi de %0.2f pontos", media);	
	
	return 0;
}





