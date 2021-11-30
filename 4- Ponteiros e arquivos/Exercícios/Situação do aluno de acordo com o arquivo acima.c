/*Verica��o do status do aluno (aprovado ou reprovado)
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	int resp, aluno;	//declara��o de vari�veis				
	float media;		//declara��o de vari�veis				
	
	FILE *ponteiro;		//cria��o do ponteiro que aponta para o tipo FILE			
	ponteiro = fopen("M�dia de notas com cria��o de arquivo.txt", "r");    //abrindo o arquivo j� criado
	
	printf ("Notas dos alunos:");	//sa�da de dados
	
	char medias [1000];				//vetor para armazenar as strings lidas			
	
	while (fgets(medias, 1000, ponteiro) != NULL)	//repeti��o para automatizar a leitura com o comando fgets ( )
	{
		printf ("\n%s", medias);	
	}
	
	fclose (ponteiro);		//fechando o arquivo			
	
	FILE *ponteiroII;		//cria��o do ponteiro que aponta para o tipo FILE					
	ponteiroII = fopen ("Situa��o do aluno de acordo com o arquivo acima.txt", "w");   //criando um novo arquivo 
	
	printf ("\nDeseja confirmar o status do aluno?");		//sa�da de dados
	printf ("\n1 - SIM");
	printf ("\n2 - NAO\n");
	scanf ("\n%d", &resp);									//entrada de dados
	
	if (resp == 1)								//estrutura de decis�o afim de confirmar ou n�o o status							
	{
		for (aluno = 0; aluno < 5; aluno++) 	//repeti��o para confirmar todos os alunos presentes	
		{
			media = 0;							//reset da media para n�o influenciar nos outros status						
			printf ("\nDigite novamente a media do aluno %i:\n", aluno + 1); 	
			scanf ("\n%f", &media);												
			if (media >= 5)	     				//decis�o de acordo com a media (aprovado x reprovado)
			{
				fprintf (ponteiroII, "Nota do aluno %d: %0.2f -", aluno + 1, media);     //escrevendo no arquivo
				char aprovado[] = (" Aprovado!\n");									     //vetor que ser� inserido
				fputs (aprovado, ponteiroII);											 //inserindo strings no arquivo com fputs ( )
				media = 0;																 //reset da media
			} else if (media < 5) {
				fprintf (ponteiroII, "Nota do aluno %d: %0.2f -", aluno + 1, media); 
				char reprovado[] = (" Reprovado!\n");							
				fputs (reprovado, ponteiroII);									
				media = 0;
			} else 
				printf ("\nOpcao invalida");	//sa�da de dados
		}	
	} else if (resp == 2) {
		return 0;								//retorno nulo caso n�o deseje fazer a confirma��o
	} else 
		printf ("\nOpcao invalida!");   		//sa�da de dados
	
	fclose (ponteiroII);						//fechando o arquivo

	return 0;
}





