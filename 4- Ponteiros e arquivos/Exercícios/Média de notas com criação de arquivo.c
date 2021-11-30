/*Cálculo da média de 3 notas de x alunos e criação de arquivo com os resultados
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	FILE *ponteiro_media;                //criação do ponteiro que aponta para o tipo FILE
	ponteiro_media = fopen("Média de notas com criação de arquivo.txt", "w"); 
	//criando o arquivo
	
	float nota1, nota2, nota3, media;	 //declaração de variáveis
	int contador, alunos;				 //contador de notas função for
	
	printf ("\nDigite a quantidade de alunos que voce deseja calcular a media...\n");
	scanf ("%i", &alunos);
	
	for (contador = 0; contador < alunos; contador++) { 		  					//estrutura de repetição for
		printf ("Insira as 3 notas do aluno %i\n", contador + 1); 					//saída de dados
		scanf ("%f%f%f", &nota1, &nota2, &nota3);				  					//entrada de dados
		media = (nota1 + nota2 + nota3) / 3;					  					//operação aritmética de média
		fprintf (ponteiro_media, "Nota aluno %i: %0.2f\n", contador + 1, media);	//digitando dentro do arquivo
	}
	
	fclose (ponteiro_media);									   //fechando o arquivo;
	
	printf ("\nArquivo externo criado com sucesso!");	  		   //mensagem de confirmação
	
	return 0;
}





