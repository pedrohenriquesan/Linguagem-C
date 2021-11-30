/*Vericação do status do aluno (aprovado ou reprovado)
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int resp, aluno;	//declaração de variáveis				
	float media;		//declaração de variáveis				
	
	FILE *ponteiro;		//criação do ponteiro que aponta para o tipo FILE			
	ponteiro = fopen("Média de notas com criação de arquivo.txt", "r");    //abrindo o arquivo já criado
	
	printf ("Notas dos alunos:");	//saída de dados
	
	char medias [1000];				//vetor para armazenar as strings lidas			
	
	while (fgets(medias, 1000, ponteiro) != NULL)	//repetição para automatizar a leitura com o comando fgets ( )
	{
		printf ("\n%s", medias);	
	}
	
	fclose (ponteiro);		//fechando o arquivo			
	
	FILE *ponteiroII;		//criação do ponteiro que aponta para o tipo FILE					
	ponteiroII = fopen ("Situação do aluno de acordo com o arquivo acima.txt", "w");   //criando um novo arquivo 
	
	printf ("\nDeseja confirmar o status do aluno?");		//saída de dados
	printf ("\n1 - SIM");
	printf ("\n2 - NAO\n");
	scanf ("\n%d", &resp);									//entrada de dados
	
	if (resp == 1)								//estrutura de decisão afim de confirmar ou não o status							
	{
		for (aluno = 0; aluno < 5; aluno++) 	//repetição para confirmar todos os alunos presentes	
		{
			media = 0;							//reset da media para não influenciar nos outros status						
			printf ("\nDigite novamente a media do aluno %i:\n", aluno + 1); 	
			scanf ("\n%f", &media);												
			if (media >= 5)	     				//decisão de acordo com a media (aprovado x reprovado)
			{
				fprintf (ponteiroII, "Nota do aluno %d: %0.2f -", aluno + 1, media);     //escrevendo no arquivo
				char aprovado[] = (" Aprovado!\n");									     //vetor que será inserido
				fputs (aprovado, ponteiroII);											 //inserindo strings no arquivo com fputs ( )
				media = 0;																 //reset da media
			} else if (media < 5) {
				fprintf (ponteiroII, "Nota do aluno %d: %0.2f -", aluno + 1, media); 
				char reprovado[] = (" Reprovado!\n");							
				fputs (reprovado, ponteiroII);									
				media = 0;
			} else 
				printf ("\nOpcao invalida");	//saída de dados
		}	
	} else if (resp == 2) {
		return 0;								//retorno nulo caso não deseje fazer a confirmação
	} else 
		printf ("\nOpcao invalida!");   		//saída de dados
	
	fclose (ponteiroII);						//fechando o arquivo

	return 0;
}





