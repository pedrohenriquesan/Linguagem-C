/*Somas das compras de um cliente + aplica��o de desconto com as fun��es while e if else
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	float compra1, compra2, compra3, compra4, total;   //declara��o de vari�veis
	int contador = 0;								   
	int numerodeClientes;							   
	
	printf ("\nQuantos clientes deseja atender? \n");  //sa�da de dados
	scanf ("%d", &numerodeClientes);				   //entrada de dados
	
	while (contador < numerodeClientes)				   //fun��o de repeti��o while                              					 
	{
		printf ("\nDigite o valor das compras do cliente %d: \n", contador + 1);  //sa�da de dados
		scanf ("%f%f%f%f", &compra1, &compra2, &compra3, &compra4);		 		  //entrada de dados										 
		total = 0;												 	  		      
		total = compra1 + compra2 + compra3 + compra4;						   	  //c�lculo
		if (total > 100)												    	  //estrutura de decis�o para aplica��o de desconto
		{
			total = 0.8 * total;
			printf ("\nO valor total da compra do cliente %d com 20%% de desconto foi de %0.2f", contador + 1, total);  
	    } else 
			printf ("\nO valor total da compra do cliente %d foi de %0.2f", contador + 1, total);  				   
		contador++;														 
	}
	
	return 0;
}




