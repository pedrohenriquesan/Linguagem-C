/*Estrutura de dados - acesso aos dados no formato de lista - lista de inteiros
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h>			//inclusão das bibliotecas stdio.h e locale.h
#include <locale.h>			//biblioteca que permite uso da acentuação gráfica

int operacao, achou;		//varáveis globais

int Lista[3], num, i;
int quant = -1;
int posicao;

void inserirInicio ()		//função de inserção no início da lista
{
	if (quant == 2)
		printf ("\nLista cheia!");
	else 
	{
		printf ("\nInforme um número inteiro: ");
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

void inserirFinal ()		//função de inserção no final da lista
{
	if (quant == 2)
		printf ("\nLista cheia!");
	else 
	{
		printf ("\nInforme um número inteiro: ");
		scanf ("%d", &num);
		quant++;
		Lista[quant] = num;
		printf ("Elemento %d inserido com sucesso\n", num);	
	}	
}

void inserirAleatorio ()	//função de inserção em qualquer posição da lista
{	
	if (quant == 2)
		printf ("Lista cheia!");
	else 
	{
		printf ("\nInforme um número inteiro: ");
		scanf ("%d", &num);
		printf ("\nInforme uma posição entre 0 e 2 em que você deseja inserir o elemento: ");
		scanf ("%d", &posicao);
		
		if (posicao < 0 || posicao > 2)
			printf ("Posição inválida");
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

void removerElemento ()		//função de remoção
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
			printf ("\nElemento %d alocado na posição %d foi removido", num, posicao);
		}
		else
			printf ("Elemento %d não foi encontrado!", num);	
	}
}

void ordenarCrescente ()	//função de ordenação crescente
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
		printf ("Ordenação realizada com sucesso!");
	}
}

void ordenarDecrescente ()	//função de ordenação decrescente
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
		printf ("Ordenação realizada com sucesso!");
	}
}

void buscaBinaria ()		//função de busca (permite 1 busca por exercução)
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
			printf ("O elemento %d não foi encontrado na lista", num);
		else
			printf ("O elemento %d foi encontrado na posição %d", num, posicao);
	}
}

void exibirLista ()		//função de exibição completa da lista
{
	if (quant == -1)
		printf ("Lista vazia!");
	else
	{
		for (i = 0; i<= quant; i++)
			printf ("%d", Lista[i]);
	}
}

void menu ()			//menu de operações
{
	printf ("OPERAÇÕES DA LISTA DE INTEIROS");
	printf("\n1- Inserir no início da lista");
	printf("\n2- Inserir no final da lista");
	printf("\n3- Inserir em qualquer lugar da lista");
	printf("\n4- Remover elemento");
	printf("\n5- Ordenar por troca crescente");				//saída de dados
	printf("\n6- Ordenar por troca decrescente");
	printf("\n7- Busca binária");
	printf("\n8- Exibir lista");
	printf("\n\nInforme a operação desejada: ");
	scanf ("%d", &operacao);
}

void selecaoMenu ()		//seleção das operações com switch case
{
	switch (operacao)
	{
		case 1: inserirInicio ();					//1° operação
			break;
		case 2: inserirFinal ();					//2° operação
			break;
		case 3: inserirAleatorio ();				//3° operação
			break;
		case 4: removerElemento ();					//4° operação
			break;
		case 5:	ordenarCrescente ();				//5° operação
			break;
		case 6: ordenarDecrescente ();				//6° operação
			break;
		case 7:	buscaBinaria ();					//7° operação
			break;
		case 8: exibirLista ();						//8° operação
			break;
		default: printf ("\nOperação inválida!");	//mensagem padrão
			break;
	}
}

int main ()				//função principal da linguagem
{
	int resp;
	
	setlocale(LC_ALL, "");		//para uso da acentuação
	
	do {
		menu();
		selecaoMenu();
		printf ("\nDeseja continuar? (1: SIM - 2: NÃO): ");
		scanf ("%d", &resp);
		printf ("\n-----------------------------------\n");
	} while (resp == 1);
	
	return 0;
}



