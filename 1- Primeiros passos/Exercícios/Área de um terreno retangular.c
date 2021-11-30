/*Cálculo da área de um terreno retangular
Dev: Pedro Henrique Santos Araujo*/

#include<stdio.h> //inclusão da biblioteca de dados stdio.h

int main() //função principal da linguagem
{
	int largura, comprimento, area; //declaração de variáveis

	printf("Informe a largura do terreno: "); //saída de dados 
	scanf("%i",&largura); 					  //entrada de dados 
	
	printf("Informe o comprimento do terreno: ");     
	scanf("%i",&comprimento);
	
	area = largura * comprimento;			  //operação
	printf("Area do terreno: %i m^2", area);

	return 0;
}


