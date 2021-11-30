/*Menu para c�lculo de �rea com a estrutura de repeti��o do while
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	int resp, escolha;																//declara��o de vari�veis
	float lado, area1, base, altura, area2, baseTriangulo, alturaTriangulo, area3;	
	
	//entre a linha 12 e 48 temos o comando do while, onde o usu�rio determina quando o loop encerra
	do {
		printf ("\nQuadro de calculos de area oferecidos:");
		printf ("\n|--------------|");
		printf ("\n|1 - quadrado  |");
		printf ("\n|2 - retangulo |");      
		printf ("\n|3 - triangulo |");	 
		printf ("\n|--------------|");
		printf ("\nEscolha a opcao desejada para um teste: ");  //sa�da de dados
		scanf ("%d", &escolha);								    //entrada de dados
		
		if (escolha == 1)																//estrutura de decis�o
		{
			printf ("\nDigite o lado do quadrado em metros:");		
			scanf ("%f", &lado);								
			area1 = lado * lado;														//�rea do quadrado
			printf ("\nA area do quadrado e de %0.2f metros quadrados", area1);
		}
		else if (escolha == 2)
		{
			printf ("\nDigite o valor da base e da altura do retangulo em metros:"); 
			scanf ("%f%f", &base, &altura);											 
			area2 = base * altura;														//�rea do retangulo
			printf ("\nA area do retangulo e de %0.2f metros quadrados", area2);
		}
		else if (escolha == 3)
		{
			printf ("\nDigite o valor da base e da altura do triangulo em metros:"); 
			scanf ("%f%f", &baseTriangulo, &alturaTriangulo);					     
			area3 = baseTriangulo * alturaTriangulo / 2;								//�rea do triangulo
			printf ("\nA area do triangulo e de %0.2f metros quadrados", area3);
		}
		else
			printf ("\nEscolha invalidade !");
			
		printf ("\nSe deseja efetuar outro calculo digite 1, se nao digite 2"); 
		scanf ("%d", &resp);													
	} while (resp == 1);
	
	return 0;
}





