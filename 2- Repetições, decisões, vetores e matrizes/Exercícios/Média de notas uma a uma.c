/*Calculo da média de 4 alunos automaticamente
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int numeroAlunos;	//declaração de variáveis
	int numeroNotas;    
	
	float mediaAlunos = 0;	   			    
	float soma = 0;							
	
	float matriznotaAlunos [4][4] = {0};	//matriz que vai armazenar as 4 notas de cada aluno
	
	for (numeroAlunos = 0; numeroAlunos < 4; numeroAlunos++)			                //repetição que controla o número de alunos (4)
	{
		printf ("\nInsira as 4 notas do aluno %i:\n", numeroAlunos + 1);			    
		for (numeroNotas = 0; numeroNotas < 4; numeroNotas++)		                 	//repetição que controla o número de notas (4)
		{
			scanf("%f", &matriznotaAlunos[numeroAlunos][numeroNotas]);                  //entrada de dados
			soma += matriznotaAlunos[numeroAlunos][numeroNotas];	                    //operacação aritmética
		}	
		mediaAlunos = soma/4;					  					            	 	//cálculo da média dos alunos
		printf ("A media do aluno %i foi de %0.2f\n", numeroAlunos + 1, mediaAlunos);
		soma = 0;																	    //Reset do da valor da soma, para iniciar outro aluno
		mediaAlunos = 0;												                //Reset do da valor da media, para iniciar outro aluno
    }		  
    
	return 0;
}



