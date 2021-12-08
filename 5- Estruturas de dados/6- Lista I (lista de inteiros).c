/*Estrutura de dados - acesso aos dados no formato de lista - lista de inteiros
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h>			//inclus�o das bibliotecas stdio.h e locale.h
#include <locale.h>			//biblioteca que permite uso da acentua��o gr�fica

int operacao, achou;		//var�veis globais

int Lista[3], num, i;
int quant = -1;
int posicao;

void inserirInicio ()		//fun��o de inser��o no in�cio da lista
{
	if (quant == 2)
		printf ("\nLista cheia!");
	else 
	{
		printf ("\nInforme um n�mero inteiro: ");
		scanf ("%d", &num);
		
		for (i = quant + 1; i > 0; i--)
		{
			Lista[i] = Lista[i-1];	
		}
			
		quant++;
		Lista[0] = num;
		printf ("Elemento %d inserido com sucesso\n", num);	
	}	
}

void inserirFinal ()		//fun��o de inser��o no final da lista
{
	if (quant == 2)
		printf ("\nLista cheia!");
	else 
	{
		printf ("\nInforme um n�mero inteiro: ");
		scanf ("%d", &num);
		quant++;
		Lista[quant] = num;
		printf ("Elemento %d inserido com sucesso\n", num);	
	}	
}

void inserirAleatorio ()	//fun��o de inser��o em qualquer posi��o da lista
{	
	if (quant == 2)
		printf ("Lista cheia!");
	else 
	{
		printf ("\nInforme um n�mero inteiro: ");
		scanf ("%d", &num);
		printf ("\nInforme uma posi��o entre 0 e 2 em que voc� deseja inserir o elemento: ");
		scanf ("%d", &posicao);
		
		if (posicao < 0 || posicao > 2)
			printf ("Posi��o inv�lida");
		else 
		{
			for (i = quant+1; i > posicao; i--)
				Lista[i] = Lista[i-1];
			
			quant++;
			Lista[posicao] = num;
			printf ("Elemento %d inserido com sucesso!", num);
		}
	}
}

void removerElemento ()		//fun��o de remo��o
{
	if (quant == -1)
		printf ("\nLista vazia!");
	else 
	{
		printf ("\nInforme o elemento que deseja remover: ");
		scanf ("%d", &num);
		
		posicao = -1;
		for (i = 0; i <= quant; i++)
			if (Lista[i] == num)
				posicao = i;
		if (posicao != -1)
		{
			for (i = posicao; i < quant; i++)
				Lista[i] = Lista[i+1];
				
			quant--;
			printf ("\nElemento %d alocado na posi��o %d foi removido", num, posicao);
		}
		else
			printf ("Elemento %d n�o foi encontrado!", num);	
	}
}

void ordenarCrescente ()	//fun��o de ordena��o crescente
{
	int j, aux;
	
	if (quant == -1)
		printf ("Lista vazia!");
	else 
	{
		for (i = 0; i < quant; i++)
		{
			for (j = 0; j < quant; j++)
			{
				if (Lista[j] > Lista[j+1])
					{
						aux = Lista[j];
						Lista[j] = Lista[j+1];
						Lista[j+1] = aux;
					}	
			}	
		}
		printf ("Ordena��o realizada com sucesso!");
	}
}

void ordenarDecrescente ()	//fun��o de ordena��o decrescente
{
	int j, aux;
	
	if (quant == -1)
		printf ("Lista vazia!");
	else 
	{
		for (i = 0; i < quant; i++)
		{
			for (j = 0; j < quant; j++)
			{
				if (Lista[j] < Lista[j+1])
					{
						aux = Lista[j];
						Lista[j] = Lista[j+1];
						Lista[j+1] = aux;
					}	
			}	
		}
		printf ("Ordena��o realizada com sucesso!");
	}
}

void buscaBinaria ()		//fun��o de busca (permite 1 busca por exercu��o)
{
	int inicio, fim;
	
	if (quant == -1)
		printf ("Lista vazia!");
	else 
	{
		ordenarCrescente();
		printf ("\n\nInforme o elemento a ser buscado: ");
		scanf ("%d", &num);
		achou = 0;
		inicio = 0;
		fim = quant;
		posicao = (inicio + fim)/2;
		
		while (achou == 0 && inicio <= fim)
		{
			if (num ==  Lista[posicao])
				achou = 1;
			else
			{
				if (num > Lista[posicao])
					inicio = posicao + 1;
				else
					posicao  = (inicio + fim)/2;
			}
		}
		
		if (achou == 0)
			printf ("O elemento %d n�o foi encontrado na lista", num);
		else
			printf ("O elemento %d foi encontrado na posi��o %d", num, posicao);
	}
}

void exibirLista ()		//fun��o de exibi��o completa da lista
{
	if (quant == -1)
		printf ("Lista vazia!");
	else
	{
		for (i = 0; i<= quant; i++)
			printf ("%d", Lista[i]);
	}
}

void menu ()			//menu de opera��es
{
	printf ("OPERA��ES DA LISTA DE INTEIROS");
	printf("\n1- Inserir no in�cio da lista");
	printf("\n2- Inserir no final da lista");
	printf("\n3- Inserir em qualquer lugar da lista");
	printf("\n4- Remover elemento");
	printf("\n5- Ordenar por troca crescente");				//sa�da de dados
	printf("\n6- Ordenar por troca decrescente");
	printf("\n7- Busca bin�ria");
	printf("\n8- Exibir lista");
	printf("\n\nInforme a opera��o desejada: ");
	scanf ("%d", &operacao);
}

void selecaoMenu ()		//sele��o das opera��es com switch case
{
	switch (operacao)
	{
		case 1: inserirInicio ();					//1� opera��o
			break;
		case 2: inserirFinal ();					//2� opera��o
			break;
		case 3: inserirAleatorio ();				//3� opera��o
			break;
		case 4: removerElemento ();					//4� opera��o
			break;
		case 5:	ordenarCrescente ();				//5� opera��o
			break;
		case 6: ordenarDecrescente ();				//6� opera��o
			break;
		case 7:	buscaBinaria ();					//7� opera��o
			break;
		case 8: exibirLista ();						//8� opera��o
			break;
		default: printf ("\nOpera��o inv�lida!");	//mensagem padr�o
			break;
	}
}

int main ()				//fun��o principal da linguagem
{
	int resp;
	
	setlocale(LC_ALL, "");		//para uso da acentua��o
	
	do {
		menu();
		selecaoMenu();
		printf ("\nDeseja continuar? (1: SIM - 2: N�O): ");
		scanf ("%d", &resp);
		printf ("\n-----------------------------------\n");
	} while (resp == 1);
	
	return 0;
}



