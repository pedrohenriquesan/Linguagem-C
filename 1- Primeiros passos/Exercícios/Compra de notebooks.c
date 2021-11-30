/*Calcular e exibir o valor da compra de notebooks de mesmo valor
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int quantidade; //declaração de variáveis
	float preco;    
	float soma;     
	  
	printf ("digite a quantidade de notebooks que deseja comprar: "); //saída de dados 
	scanf ("%i", &quantidade);										  //entrada de dados 
	printf ("\ndigite qual preço do notebook escolhido: ");
	scanf ("%f", &preco);
		
	soma = quantidade * preco;										  //operação
	
	printf ("\nO valor de sua compra: $%0.2f", soma);
	
	return 0;
}

