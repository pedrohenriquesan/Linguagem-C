/*Soma de n números inteiros de 1 até n
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h>    //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int somaInteiros (int num);    //declaração da função de soma
	int numero;					   //declaração de variáveis
	
	printf ("Insira um valor inteiro:\n");		//saída de dados
	scanf("%d", &numero);						//entrada de dados
	
	printf("A soma dos inteiros de 1 ate %d e: %d\n", numero, somaInteiros(numero));
	//saída dos resultados
	
	return 0;
}

int somaInteiros (int num) 		//função de contagem
{
	if (num == 0) 				//estrutura de decisão
		return 0;      
	else
		return num + somaInteiros(num-1); 
}











