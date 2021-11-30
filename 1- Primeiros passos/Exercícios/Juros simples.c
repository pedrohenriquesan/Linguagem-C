/*Cálculo juros simples
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	float deposito, taxa, rendimento, total; //declaração de variáveis
	
	printf ("Informe o valor do deposito e a taxa de juros: "); //saída de dados 
	scanf ("%f%f", &deposito,&taxa);							//entrada de dados 
	
	rendimento = deposito * taxa/100;							//operações
	total = rendimento + deposito;
	
	printf ("O seu rendimento e %0.2f e o seu valor total e %0.2f", rendimento, total);
	
	return 0;
}


