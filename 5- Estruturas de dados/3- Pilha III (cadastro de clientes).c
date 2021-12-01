/*Estrutura de dados - acesso aos dados no formato de pilha - Cadastro de clientes em pilha
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h>		//inclusão da biblioteca de dados stdio.h e string.h
#include <string.h>

struct Cliente {		//criação da estrutura global dos dados dos clientes
	int id;
	char nome[60];
	int contato;
	char endereco[60];
};

struct Cliente Clientes[3];		//declaração do vetor do tipo da estrutura criada
int operacao;					//declaração de variáveis
int topo = -1;
int i, cont;
char nom[60], end[60];

void cadastroCliente ()			//função de inserção
{
	if (topo == 2)
		printf ("\nArmazenamento de clientes lotado!");
	else 
	{
		fflush(stdin);								
		printf ("\nInforme o nome do cliente: ");
		scanf ("%[^\n]", nom);						
		printf ("Informe o ID do cliente: ");
		scanf ("%d", &i);
		
		fflush(stdin);
		printf ("Informe o endereco do cliente: ");
		scanf ("%[^\n]", end);
		printf ("Informe o telefone de contato do cliente: ");
		scanf ("%d", &cont);
		
		topo++;
		Clientes[topo].id = i;
		Clientes[topo].contato = cont;
		strcpy(Clientes[topo].nome,nom);
		strcpy(Clientes[topo].endereco,end);
			
		printf ("\nDados do cliente cadastrado:\nNome: %s\nID: %d\nEndereco: %s\n"
		"Telefone: %d \nInserido com sucesso!\n", nom, i, end, cont);
	}
}

void deletarCliente ()			//função de deleção
{
	if (topo == -1)
		printf ("\nNão existe cliente para ser apagado!");
	else 
	{
		printf ("\nCliente %d foi removido com sucesso!", topo);
		topo--;
	}
}

void mostrarPrimeiroCliente ()		//função de exibição do cliente na base da pilha
{
	if (topo == -1)
		printf ("\nArmazenamento de clientes vazio!!");
	else
	{
		printf ("\nPrimeiro cliente cadastrado:");
		printf ("\nID: %d", Clientes[0].id);
		printf ("\nNome: %s", Clientes[0].nome);
		printf ("\nTelefone: %d", Clientes[0].contato);
		printf ("\nEndereco: %s", Clientes[0].endereco);
		printf ("\n");
	}
}

void mostrarUltimoCliente ()		//função de exibição do cliente no topo da pilha
{
	if (topo == -1)
		printf ("\nArmazenamento de clientes vazio!!");
	else
	{
		printf ("\nUltimo cliente cadastrado:");
		printf ("\nID: %d", Clientes[topo].id);
		printf ("\nNome: %s", Clientes[topo].nome);
		printf ("\nTelefone: %d", Clientes[topo].contato);
		printf ("\nEndereco: %s", Clientes[topo].endereco);
		printf ("\n");
	}
}

void mostrarTodosClientes ()		//função de exibição de todos os clientes
{
	int i;
	
	if (topo == -1)
		printf ("\nNenhum cadastro encontrado!");
	else
	{
		for (i = topo; i >= 0; i--)
		{
			printf ("\nCliente %d", i);
			printf ("\nID: %d", Clientes[i].id);
			printf ("\nNome: %s", Clientes[i].nome);
			printf ("\nTelefone: %d", Clientes[i].contato);
			printf ("\nEndereco: %s", Clientes[i].endereco);
			printf ("\n");
		}
	}
}

void menu ()						//menu de operações
{
	printf ("-----------------CADASTROS-----------------");
	printf ("\n1 - Cadastrar cliente");
	printf ("\n2 - Remover cadastro de cliente");
	printf ("\n3 - Mostrar o primeiro cliente cadastrado");
	printf ("\n4 - Mostrar o ultimo cliente cadastrado");
	printf ("\n5 - Mostrar todos os cadastros de clientes");
	
	printf ("\nEscolha a operacao desejada: ");
	scanf ("%d", &operacao);
}

void selecaoMenu ()					//estrutura de decisão das operações
{
	switch (operacao)
	{
		case 1: cadastroCliente ();
			break;
		case 2: deletarCliente ();
			break;
		case 3: mostrarPrimeiroCliente ();
			break;
		case 4: mostrarUltimoCliente ();
			break;
		case 5: mostrarTodosClientes ();
			break;
		default: printf ("\nOpcao invalida!");
			break;
	}
}

int main ()							//função principal da linguagem
{
	void menu ();
	void selecaoMenu ();
	
	int resposta;
	
	do {
		menu();
		selecaoMenu();
		printf ("\nDeseja continuar? (1 - Sim / 2- Nao)");
		scanf ("%d", &resposta);	
	} while (resposta == 1);
	
	return 0;
}

