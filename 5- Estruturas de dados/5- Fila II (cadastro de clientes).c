/*Estrutura de dados - acesso aos dados no formato de fila - Cadastro de clientes em fila
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h>
#include <string.h>

int operacao;

struct Cliente {
	int id;
	char nome[60];
	int contato;
	char endereco[60];
};

struct Cliente Clientes[3];
int quant = -1;
int i, cont;
char nom[60], end[60];

void cadastroCliente ()
{
	if (quant == 2)
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
		
		quant++;
		Clientes[quant].id = i;
		Clientes[quant].contato = cont;
		strcpy(Clientes[quant].nome,nom);
		strcpy(Clientes[quant].endereco,end);
			
		printf ("\nDados do cliente cadastrado:\nNome: %s\nID: %d\nEndereco: %s\n"
		"Telefone: %d \nInserido com sucesso!\n", nom, i, end, cont);
	}
}

void deletarCliente ()
{
	int j;
	
	if (quant == -1)
		printf ("\nNão existe cliente para ser apagado!");
	else 
	{
		i = Clientes[0].id;
		cont = Clientes[0].contato;
		strcpy(nom,Clientes[0].nome);
		strcpy(end,Clientes[0].endereco);
			
		for (j = 0; j <= quant-1; j++)
		{
			Clientes[j].id = Clientes[j+1].id;
			Clientes[j].contato = Clientes[j+1].contato;
			strcpy(Clientes[j].nome,Clientes[j+1].nome);
			strcpy(Clientes[j].endereco,Clientes[j+1].endereco);
		}
		quant--;
		
		printf ("\nO cliente com dados:\nNome: %s\nID: %d\nEndereco: %s\n"
		"Telefone: %d\nfoi removido com sucesso!\n", nom, i, end, cont);
	}
}

void mostrarPrimeiroCliente ()
{
	if (quant == -1)
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

void mostrarUltimoCliente ()
{
	if (quant == -1)
		printf ("\nArmazenamento de clientes vazio!!");
	else
	{
		printf ("\nUltimo cliente cadastrado:");
		printf ("\nID: %d", Clientes[quant].id);
		printf ("\nNome: %s", Clientes[quant].nome);
		printf ("\nTelefone: %d", Clientes[quant].contato);
		printf ("\nEndereco: %s", Clientes[quant].endereco);
		printf ("\n");
	}
}

void mostrarTodosClientes ()
{
	int i;
	
	if (quant == -1)
		printf ("\nNenhum cadastro encontrado!");
	else
	{
		for (i = 0; i <= quant; i++)
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

void menu ()
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

void selecaoMenu ()
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

int main ()
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

