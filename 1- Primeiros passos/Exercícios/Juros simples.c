/*C�lculo juros simples
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	float deposito, taxa, rendimento, total; //declara��o de vari�veis
	
	printf ("Informe o valor do deposito e a taxa de juros: "); //sa�da de dados 
	scanf ("%f%f", &deposito,&taxa);							//entrada de dados 
	
	rendimento = deposito * taxa/100;							//opera��es
	total = rendimento + deposito;
	
	printf ("O seu rendimento e %0.2f e o seu valor total e %0.2f", rendimento, total);
	
	return 0;
}


