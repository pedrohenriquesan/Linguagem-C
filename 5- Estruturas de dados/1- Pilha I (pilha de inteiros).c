/*Estrutura de dados - acesso aos dados no formato de pilha - pilha de inteiros
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h>	//inclusão da biblioteca stdio.h

int Pilha[5], topo = -1, i, num;	//variáveis globais

int main ()			//função principal da linguagem
{
	int op, resp;	//declaração de variáveis
	
	do		//ciclo do while
	{
		printf ("\nPilha de inteiros");	
		printf ("\n1 - Insercao de valores");	
		printf ("\n2 - Remocao de valores");			//saídas de dados
		printf ("\n3 - Exibicao do topo da pilha");		
		printf ("\n4 - Exbicao da pilha");	
		
		printf ("\nEscolha a operacao desejada: ");
		scanf ("%d", &op);								//entrada de dados
		
		switch (op)		//estrutura de decisão switch case
		{
			case 1: inserirElemento();	//1° operação em relação a pilha
			break;
			case 2: removerElemento();	//2° operação em relação a pilha
			break;
			case 3: exibirTopo();		//3° operação em relação a pilha
			break;
			case 4: exibirPilha();		//4° operação em relação a pilha
			break;
			default:printf ("\nOperação inexistente");	//mensagem padrão
		}	
		
		printf ("\nDeseja continuar? (1 - Sim, 0 - Nao): ");
		scanf ("%d", &resp);
		
	} while (resp == 1);		//condição do ciclo
	
	return 0;	
}

void inserirElemento ()		//função de inserção
{
	if (topo == 4)
		printf ("\nPilha cheia!");
	else 
	{
		printf ("\nInforme um valor: ");
		scanf ("%d", &num);
		topo++;
		Pilha[topo] = num;
		printf ("\nElemento inserido com sucesso", num);
		printf ("\n--------------------------------------------");
	}
}

void removerElemento ()		//função de remoção
{
	if (topo == -1)
		printf ("\nPilha vazia!");
	else 
	{
		num = Pilha[topo];
		topo--;
		printf ("\nElemento %d foi removido com sucesso!", num);
		printf ("\n--------------------------------------------");
	}
}

void exibirTopo ()			//função de exibição do topo
{
	if (topo == -1)
		printf ("\nPilha vazia!");
	else
		printf ("\nElemento do topo: %d", Pilha[topo]);
		printf ("\n--------------------------------------------");
}

void exibirPilha ()			//função de exibição da pilha completa
{
	int i;
	if (topo == -1)
		printf ("\nPilha vazia!");
	else
	{
		for (i = topo; i >= 0; i--)
			printf ("\n%d\n", Pilha[i]);
	}
}







