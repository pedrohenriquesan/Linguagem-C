/*C�lculo da �rea de um terreno retangular
Dev: Pedro Henrique Santos Araujo*/

#include<stdio.h> //inclus�o da biblioteca de dados stdio.h

int main() //fun��o principal da linguagem
{
	int largura, comprimento, area; //declara��o de vari�veis

	printf("Informe a largura do terreno: "); //sa�da de dados 
	scanf("%i",&largura); 					  //entrada de dados 
	
	printf("Informe o comprimento do terreno: ");     
	scanf("%i",&comprimento);
	
	area = largura * comprimento;			  //opera��o
	printf("Area do terreno: %i m^2", area);

	return 0;
}


