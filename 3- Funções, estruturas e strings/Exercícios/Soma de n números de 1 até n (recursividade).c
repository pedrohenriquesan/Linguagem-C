/*Soma de n n�meros inteiros de 1 at� n
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h>    //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	int somaInteiros (int num);    //declara��o da fun��o de soma
	int numero;					   //declara��o de vari�veis
	
	printf ("Insira um valor inteiro:\n");		//sa�da de dados
	scanf("%d", &numero);						//entrada de dados
	
	printf("A soma dos inteiros de 1 ate %d e: %d\n", numero, somaInteiros(numero));
	//sa�da dos resultados
	
	return 0;
}

int somaInteiros (int num) 		//fun��o de contagem
{
	if (num == 0) 				//estrutura de decis�o
		return 0;      
	else
		return num + somaInteiros(num-1); 
}











