/*Cálculo da média de 4 alunos de forma automatica
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão de biblioteca

int main () //função principal da linguagem
{
	int numeroAlunos;	//declaração de variáveis 
	int numeroNotas;    
	
	float matriznotaAlunos [4][4] = {0};	//declaração da matriz e do vetor
	float vetormediaAlunos [4] = {0};	
	
	float soma = 0;				
	
	for (numeroAlunos = 0; numeroAlunos < 4; numeroAlunos++)		       //repetição que controla o número de alunos
	{
		printf ("\nInsira as 4 notas do aluno %d:\n", numeroAlunos + 1);
		for (numeroNotas = 0; numeroNotas < 4; numeroNotas++)		       //repetição que controla o número de notas
		{
			scanf("%f", &matriznotaAlunos[numeroAlunos][numeroNotas]);     //entrada de dados
			soma += matriznotaAlunos[numeroAlunos][numeroNotas];	       //operação artimética
		}	
		vetormediaAlunos[numeroAlunos] = soma/4;		               	   //cálculo da média dos alunos
		soma = 0;							       //reset do da valor da soma, para iniciar outro ciclo
    }			  
    
    printf ("\nMedia de todos os alunos:\n");							   //saída de dados
    
    for (numeroAlunos = 0; numeroAlunos < 4; numeroAlunos++)	           //comando de repetição que mostra os resultados do processo
    {
    	printf ("A media do aluno %d e %0.2f\n", numeroAlunos + 1, vetormediaAlunos[numeroAlunos]);
	}
	
	return 0;
}


