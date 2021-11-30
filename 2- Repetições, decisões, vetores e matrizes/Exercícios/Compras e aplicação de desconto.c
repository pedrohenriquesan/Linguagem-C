/*Somas das compras de um cliente + aplicação de desconto com as funções while e if else
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	float compra1, compra2, compra3, compra4, total;   //declaração de variáveis
	int contador = 0;								   
	int numerodeClientes;							   
	
	printf ("\nQuantos clientes deseja atender? \n");  //saída de dados
	scanf ("%d", &numerodeClientes);				   //entrada de dados
	
	while (contador < numerodeClientes)				   //função de repetição while                              					 
	{
		printf ("\nDigite o valor das compras do cliente %d: \n", contador + 1);  //saída de dados
		scanf ("%f%f%f%f", &compra1, &compra2, &compra3, &compra4);		 		  //entrada de dados										 
		total = 0;												 	  		      
		total = compra1 + compra2 + compra3 + compra4;						   	  //cálculo
		if (total > 100)												    	  //estrutura de decisão para aplicação de desconto
		{
			total = 0.8 * total;
			printf ("\nO valor total da compra do cliente %d com 20%% de desconto foi de %0.2f", contador + 1, total);  
	    } else 
			printf ("\nO valor total da compra do cliente %d foi de %0.2f", contador + 1, total);  				   
		contador++;														 
	}
	
	return 0;
}




