/*Junção (concatenação) de strings
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{      
	void juncaoStrings (char string1[], int tamanho1,	//declaração da função externa
						char string2[], int tamanho2,
						char string3[], int tamanho3,
						char final[]);
	
	char primeiraPalavra[] = {'p', 'a', 'o', ' '};		//declaração das strings usadas
	char segundaPalavra[] = {'d', 'e', ' '};
	char terceiraPalavra[] = {'q','u','e','i','j','o'};
	char finalPalavra[13];								//vetor que vai unir as strings
	
	juncaoStrings(primeiraPalavra, 4, segundaPalavra, 4, terceiraPalavra, 9, finalPalavra);
	//chamando a função
	
	int i;	
	
	for (i = 0; i < 14; ++i)
	{
		printf ("%c", finalPalavra[i]);		//saída de dados
	}
	
	return 0;
}

void juncaoStrings (char string1[], int tamanho1,	//criação da função
					char string2[], int tamanho2,
					char string3[], int tamanho3,
					char final[])
{
	int i,j,k;		//variáveis dos ciclos que leem cada string separadamente
	
	for (i = 0; i < tamanho1; ++i)						//1° ciclo - 1° string
	{
		final[i] = string1[i];
	}
	
	for (j = 0; j < tamanho2; ++j)						//2° ciclo - 2° string
	{
		final[tamanho1 + j] = string2[j];
	}
	
	for (k = 0; k < tamanho3; ++k)						//3° ciclo - 3° string
	{
		final[tamanho1 + tamanho2 + k] = string3[k];
	}
	
}



