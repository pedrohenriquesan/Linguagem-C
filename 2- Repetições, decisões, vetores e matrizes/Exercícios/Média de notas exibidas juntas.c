/*C�lculo da m�dia de 4 alunos de forma automatica
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o de biblioteca

int main () //fun��o principal da linguagem
{
	int numeroAlunos;	//declara��o de vari�veis 
	int numeroNotas;    
	
	float matriznotaAlunos [4][4] = {0};	//declara��o da matriz e do vetor
	float vetormediaAlunos [4] = {0};	
	
	float soma = 0;				
	
	for (numeroAlunos = 0; numeroAlunos < 4; numeroAlunos++)		       //repeti��o que controla o n�mero de alunos
	{
		printf ("\nInsira as 4 notas do aluno %d:\n", numeroAlunos + 1);
		for (numeroNotas = 0; numeroNotas < 4; numeroNotas++)		       //repeti��o que controla o n�mero de notas
		{
			scanf("%f", &matriznotaAlunos[numeroAlunos][numeroNotas]);     //entrada de dados
			soma += matriznotaAlunos[numeroAlunos][numeroNotas];	       //opera��o artim�tica
		}	
		vetormediaAlunos[numeroAlunos] = soma/4;		               	   //c�lculo da m�dia dos alunos
		soma = 0;							       //reset do da valor da soma, para iniciar outro ciclo
    }			  
    
    printf ("\nMedia de todos os alunos:\n");							   //sa�da de dados
    
    for (numeroAlunos = 0; numeroAlunos < 4; numeroAlunos++)	           //comando de repeti��o que mostra os resultados do processo
    {
    	printf ("A media do aluno %d e %0.2f\n", numeroAlunos + 1, vetormediaAlunos[numeroAlunos]);
	}
	
	return 0;
}


