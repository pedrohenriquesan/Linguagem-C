/*Calcular e exibir o valor da compra de notebooks de mesmo valor
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	int quantidade; //declara��o de vari�veis
	float preco;    
	float soma;     
	  
	printf ("digite a quantidade de notebooks que deseja comprar: "); //sa�da de dados 
	scanf ("%i", &quantidade);										  //entrada de dados 
	printf ("\ndigite qual pre�o do notebook escolhido: ");
	scanf ("%f", &preco);
		
	soma = quantidade * preco;										  //opera��o
	
	printf ("\nO valor de sua compra: $%0.2f", soma);
	
	return 0;
}

