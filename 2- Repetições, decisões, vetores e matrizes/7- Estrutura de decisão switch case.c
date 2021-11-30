/*Estrutura de decisão switch case
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int ano; //declaração de variável
	
	printf ("Digite seu ano de nascimento: "); 	//saída de dados
	scanf ("%i", &ano);						   	//entrada de dados
	
	switch (ano) 								//estrutura de de decisão switch
	{
		case 2000:
			printf ("\nVoce tem 2o ou 21 anos");  //caso 	
			break;
		case 2001:
			printf ("\nVoce tem 19 ou 20 anos");  //caso	
			break;
		case 2002:
			printf ("\nVoce tem 18 ou 19 anos");  //caso	
			break;
		default:                                  //mensagem padrão
			printf ("\nVocê tem menos de 18 ou mais de 21");
			break;	
	}
		
	return 0;
}







