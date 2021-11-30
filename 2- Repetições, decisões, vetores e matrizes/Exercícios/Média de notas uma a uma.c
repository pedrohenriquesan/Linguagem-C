/*Calculo da m�dia de 4 alunos automaticamente
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	int numeroAlunos;	//declara��o de vari�veis
	int numeroNotas;    
	
	float mediaAlunos = 0;	   			    
	float soma = 0;							
	
	float matriznotaAlunos [4][4] = {0};	//matriz que vai armazenar as 4 notas de cada aluno
	
	for (numeroAlunos = 0; numeroAlunos < 4; numeroAlunos++)			                //repeti��o que controla o n�mero de alunos (4)
	{
		printf ("\nInsira as 4 notas do aluno %i:\n", numeroAlunos + 1);			    
		for (numeroNotas = 0; numeroNotas < 4; numeroNotas++)		                 	//repeti��o que controla o n�mero de notas (4)
		{
			scanf("%f", &matriznotaAlunos[numeroAlunos][numeroNotas]);                  //entrada de dados
			soma += matriznotaAlunos[numeroAlunos][numeroNotas];	                    //operaca��o aritm�tica
		}	
		mediaAlunos = soma/4;					  					            	 	//c�lculo da m�dia dos alunos
		printf ("A media do aluno %i foi de %0.2f\n", numeroAlunos + 1, mediaAlunos);
		soma = 0;																	    //Reset do da valor da soma, para iniciar outro aluno
		mediaAlunos = 0;												                //Reset do da valor da media, para iniciar outro aluno
    }		  
    
	return 0;
}



