/*Estrutura de dados - acesso aos dados no formato de pilha - pilha de registros
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> 		//inclus�o da biblioteca de dados stdio.h e string.h
#include <string.h>

struct dadosPaciente {		//cria��o da estrutura global dos dados dos pacientes
	int matricula;
	int ano_nasc;
	char nome[60];
	char endereco[60];
	float peso;
};

struct dadosPaciente Paciente[3];		//declara��o do vetor do tipo da estrutura criada
int mat, ano;							//declara��o de vari�veis
int topo = -1;
int op;		
char nom[60], ender[60];
float pes;

void inserirRegistro ()		//fun��o de inser��o
{
	if (topo == 2)
		printf ("\nPilha de registros lotada!");
	else 
	{
		fflush(stdin);		//limpando o buffer do teclado						
		printf ("\nInforme o nome do paciente: ");
		scanf ("%[^\n]", nom);									//entrada de dados				
		printf ("Informe a matricula do paciente: ");
		scanf ("%d", &mat);
		printf ("Informe o ano de nascimento do paciente: ");
		scanf ("%d", &ano);
		
		fflush(stdin);
		printf ("Informe o endereco do paciente: ");
		scanf ("%[^\n]", ender);
		printf ("Informe a massa corporal do paciente: ");
		scanf ("%f", &pes);
		
		topo++;
		Paciente[topo].matricula = mat;
		Paciente[topo].ano_nasc = ano;
		Paciente[topo].peso = pes;
		strcpy(Paciente[topo].nome,nom);			//c�pia e transfer�ncia de string
		strcpy(Paciente[topo].endereco,ender);
		
		printf ("\nPaciente:\n%s\n%d\n%s\n%d\n%0.2f \nInserido com sucesso!", nom, mat, ender, ano, pes);
		//sa�da de dados
	}
}

void exibirPilha()		//fun��o de exibi��o da pilha completa
{
	int i;
	
	if (topo == -1)
		printf ("\nSem registros!");
	else 
		for (i = topo; i >= 0; i--)
		{
			printf ("Nome: %s", Paciente[i].nome);
			printf ("\nNumero de matricula: %d", Paciente[i].matricula);
			printf ("\nEndereco:%s", Paciente[i].endereco);
			printf ("\nData de nascimento:%d", Paciente[i].ano_nasc);
			printf ("\nPeso:%0.2f", Paciente[i].peso);
			printf ("\n");
		}
}

void menu()				//menu de opera��es
{
	printf ("\nRegistro de pacientes");
		
	printf ("\n1 - Inserir paciente");		
	printf ("\n2 - Exibir todos os pacientes");	
	
	printf ("\nEscolha a operacao desejada: ");
	scanf ("%d", &op);								
}

void selecaoMenu()		//estrutura de decis�o das opera��es
{
	switch (op)		
	{
		case 1: inserirRegistro ();	
		break;
		case 2: exibirPilha();		
		break;
		default:printf ("\nOperacao inexistente");	
	}	
}

int main () 			//fun��o principal da linguagem
{      
	int resp;
	do {
		menu();
		selecaoMenu();
		printf ("\nDeseja continuar? (1 para sim e 0 para nao): ");
		scanf ("%d", &resp);
	} while (resp == 1);
	
	return 0;
}

















