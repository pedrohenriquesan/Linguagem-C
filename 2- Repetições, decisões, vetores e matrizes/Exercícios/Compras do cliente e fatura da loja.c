/*Calculo do valor de compras de cada cliente + valor que a loja conseguiu
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	int numeroClientes;	                      //contador de clientes
	int valoresCompra;    					  //contador de compras
	
	float matrizcompraCliente [4][4] = {0};	  //matriz principal
	float vetortotalCliente [4] = {0};	      //vetor que armazena os resultados
	
	float soma = 0;							  //vari�vel correspondendo a soma das compras de cada cliente
	float vendasTotais = 0;					  //vari�vel correspondendo ao valor que a loja atingiu
	
	for (numeroClientes= 0; numeroClientes < 4; numeroClientes++)			   //repeti��o que controla o numero de clientes							 
	{
		printf ("\nInsira as 4 compras do cliente %d:\n", numeroClientes + 1); //sa�da de dados
		for (valoresCompra = 0; valoresCompra < 4; valoresCompra++)		       //repeti��o que controla o numero de compras
		{
			scanf("%f", &matrizcompraCliente[numeroClientes][valoresCompra]);  //entrada de dados     					
			soma += matrizcompraCliente[numeroClientes][valoresCompra];		   //soma das compras de cada cliente   
		}	
		vetortotalCliente[numeroClientes] = soma;							   //colocando a soma no vetor indicado no in�cio
		soma = 0;   								 						   //reset da vari�vel para n�o alterar o novo ciclo
    }		
	
	printf ("\nTotal das compras de todos os cliente:\n");
	
	for (numeroClientes = 0; numeroClientes < 4; numeroClientes++)	       	   //repeti��o que mostra os resultados     
    {
    	printf ("O valor total das compras do cliente %d foi de %0.2f\n", numeroClientes + 1, vetortotalCliente[numeroClientes]);
    	//o comando acima � respons�vel por mostrar o numero do cliente e total de suas compras em ordem num�rica
	}
	
	vendasTotais = vetortotalCliente [0] + vetortotalCliente [1] + vetortotalCliente [2] + vetortotalCliente [3];
	printf ("\nO valor total de vendas da loja foi de %0.2f", vendasTotais);
	//processo da soma de tudo que a loja vendeu
	
	return 0;
}



