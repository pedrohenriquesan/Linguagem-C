/*Teste de juros simples aplicado a um capital com a estrutura de repeti��o do while
Devr: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	float juros, capital, taxa, montante;  //declara��o de vari�veis
	int tempo, taxaFalsa, resposta;		   
	
	//entre a linha 11 e 44 temos a estrutura do while (repeti��o), com a condi��o ao final
	do {
		printf ("\nInsira o valor que deseja investir e por quanto tempo:\n"); //sa�da de dados
		scanf ("%f%d", &capital, &tempo);									   //entrada de dados
		
		printf ("\nQuadro de juros ao mes que o banco oferece:");
		printf ("\n|-----------|");
		printf ("\n|1 - 0.25%%  |");
		printf ("\n|2 - 0.5%%   |");      
		printf ("\n|3 - 0.75%%  |");	 
		printf ("\n|4 - 1%%     |");
		printf ("\n|-----------|");
		printf ("\nEscolha a opcao desejada para um teste de rendimento total: ");  
		scanf ("%d", &taxaFalsa);													
		
		if (taxaFalsa == 1)		//estrutura de decis�o if else
			taxa = 0.0025;							
		else if (taxaFalsa == 2)
			taxa = 0.005;
		else if (taxaFalsa == 3)
			taxa = 0.0075;
		else if (taxaFalsa == 4)
			taxa = 0.01;
		else 
			printf ("\nOpcao invalida !");
		
		juros = capital * taxa * tempo;  //opera��es de juro simples
		montante = capital + juros;
		
		printf ("\nVoce colocaria $%0.2f e retiraria $%0.2f, com rendimento de $%0.2f", capital, montante, juros);

		printf ("\nSe voce gostaria de uma nova consulta digite 1, se nao digite 2\n"); 
		scanf ("%d", &resposta);														
	} while (resposta == 1 );
	
	return 0;
}



