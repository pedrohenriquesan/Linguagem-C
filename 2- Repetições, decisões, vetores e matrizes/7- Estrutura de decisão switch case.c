/*Estrutura de decis�o switch case
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	int ano; //declara��o de vari�vel
	
	printf ("Digite seu ano de nascimento: "); 	//sa�da de dados
	scanf ("%i", &ano);						   	//entrada de dados
	
	switch (ano) 								//estrutura de de decis�o switch
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
		default:                                  //mensagem padr�o
			printf ("\nVoc� tem menos de 18 ou mais de 21");
			break;	
	}
		
	return 0;
}







