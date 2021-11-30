/*Calculo do valor de compras de cada cliente + valor que a loja conseguiu
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int numeroClientes;	                      //contador de clientes
	int valoresCompra;    					  //contador de compras
	
	float matrizcompraCliente [4][4] = {0};	  //matriz principal
	float vetortotalCliente [4] = {0};	      //vetor que armazena os resultados
	
	float soma = 0;							  //variável correspondendo a soma das compras de cada cliente
	float vendasTotais = 0;					  //variável correspondendo ao valor que a loja atingiu
	
	for (numeroClientes= 0; numeroClientes < 4; numeroClientes++)			   //repetição que controla o numero de clientes							 
	{
		printf ("\nInsira as 4 compras do cliente %d:\n", numeroClientes + 1); //saída de dados
		for (valoresCompra = 0; valoresCompra < 4; valoresCompra++)		       //repetição que controla o numero de compras
		{
			scanf("%f", &matrizcompraCliente[numeroClientes][valoresCompra]);  //entrada de dados     					
			soma += matrizcompraCliente[numeroClientes][valoresCompra];		   //soma das compras de cada cliente   
		}	
		vetortotalCliente[numeroClientes] = soma;							   //colocando a soma no vetor indicado no início
		soma = 0;   								 						   //reset da variável para não alterar o novo ciclo
    }		
	
	printf ("\nTotal das compras de todos os cliente:\n");
	
	for (numeroClientes = 0; numeroClientes < 4; numeroClientes++)	       	   //repetição que mostra os resultados     
    {
    	printf ("O valor total das compras do cliente %d foi de %0.2f\n", numeroClientes + 1, vetortotalCliente[numeroClientes]);
    	//o comando acima é responsável por mostrar o numero do cliente e total de suas compras em ordem numérica
	}
	
	vendasTotais = vetortotalCliente [0] + vetortotalCliente [1] + vetortotalCliente [2] + vetortotalCliente [3];
	printf ("\nO valor total de vendas da loja foi de %0.2f", vendasTotais);
	//processo da soma de tudo que a loja vendeu
	
	return 0;
}



