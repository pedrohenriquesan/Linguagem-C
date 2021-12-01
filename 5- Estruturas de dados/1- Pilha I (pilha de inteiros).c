/*Estrutura de dados - acesso aos dados no formato de pilha - pilha de inteiros
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h>	//inclus�o da biblioteca stdio.h

int Pilha[5], topo = -1, i, num;	//vari�veis globais

int main ()			//fun��o principal da linguagem
{
	int op, resp;	//declara��o de vari�veis
	
	do		//ciclo do while
	{
		printf ("\nPilha de inteiros");	
		printf ("\n1 - Insercao de valores");	
		printf ("\n2 - Remocao de valores");			//sa�das de dados
		printf ("\n3 - Exibicao do topo da pilha");		
		printf ("\n4 - Exbicao da pilha");	
		
		printf ("\nEscolha a operacao desejada: ");
		scanf ("%d", &op);								//entrada de dados
		
		switch (op)		//estrutura de decis�o switch case
		{
			case 1: inserirElemento();	//1� opera��o em rela��o a pilha
			break;
			case 2: removerElemento();	//2� opera��o em rela��o a pilha
			break;
			case 3: exibirTopo();		//3� opera��o em rela��o a pilha
			break;
			case 4: exibirPilha();		//4� opera��o em rela��o a pilha
			break;
			default:printf ("\nOpera��o inexistente");	//mensagem padr�o
		}	
		
		printf ("\nDeseja continuar? (1 - Sim, 0 - Nao): ");
		scanf ("%d", &resp);
		
	} while (resp == 1);		//condi��o do ciclo
	
	return 0;	
}

void inserirElemento ()		//fun��o de inser��o
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

void removerElemento ()		//fun��o de remo��o
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

void exibirTopo ()			//fun��o de exibi��o do topo
{
	if (topo == -1)
		printf ("\nPilha vazia!");
	else
		printf ("\nElemento do topo: %d", Pilha[topo]);
		printf ("\n--------------------------------------------");
}

void exibirPilha ()			//fun��o de exibi��o da pilha completa
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







