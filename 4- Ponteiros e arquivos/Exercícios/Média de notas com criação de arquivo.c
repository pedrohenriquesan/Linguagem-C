/*C�lculo da m�dia de 3 notas de x alunos e cria��o de arquivo com os resultados
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	FILE *ponteiro_media;                //cria��o do ponteiro que aponta para o tipo FILE
	ponteiro_media = fopen("M�dia de notas com cria��o de arquivo.txt", "w"); 
	//criando o arquivo
	
	float nota1, nota2, nota3, media;	 //declara��o de vari�veis
	int contador, alunos;				 //contador de notas fun��o for
	
	printf ("\nDigite a quantidade de alunos que voce deseja calcular a media...\n");
	scanf ("%i", &alunos);
	
	for (contador = 0; contador < alunos; contador++) { 		  					//estrutura de repeti��o for
		printf ("Insira as 3 notas do aluno %i\n", contador + 1); 					//sa�da de dados
		scanf ("%f%f%f", &nota1, &nota2, &nota3);				  					//entrada de dados
		media = (nota1 + nota2 + nota3) / 3;					  					//opera��o aritm�tica de m�dia
		fprintf (ponteiro_media, "Nota aluno %i: %0.2f\n", contador + 1, media);	//digitando dentro do arquivo
	}
	
	fclose (ponteiro_media);									   //fechando o arquivo;
	
	printf ("\nArquivo externo criado com sucesso!");	  		   //mensagem de confirma��o
	
	return 0;
}





