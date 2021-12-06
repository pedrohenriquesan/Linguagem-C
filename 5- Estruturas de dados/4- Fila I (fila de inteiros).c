/*Estrutura de dados - acesso aos dados no formato de fila - fila de inteiros
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h>		//inclusão da biblioteca stdio.h

int Fila[3], opcao, num, quant = -1, i;		//variáveis globais

void inserirElemento()	//função de inserção
{
	if (quant == 2)
		printf ("\nFila cheia, tente mais tarde!");					
	else 
	{
		printf ("\nInforme um valor inteiro: ");					
		scanf ("%d", &num);											
		quant++;
		Fila[quant] = num;
		printf ("\nValor inserido com sucesso!");								
		printf ("\n------------------------------------");			
	}
}

void removerElemento()	//função de remoção
{
	if (quant == -1)
		printf ("\nA fila já está vazia!");							
	else
	{
		num = Fila[0];
		for (i = 0; i <= quant - 1; i++)	
			Fila[i] = Fila[i + 1];
		quant--;
		printf ("\nElemento %d removido com sucesso!", num);		
	}
}

void exibirUltimo()		//função de exibição do último elemento
{
	if (quant == -1)
		printf ("\nA fila está vazia!");							
	else 
		printf ("O utlimo elemento da fila e = %d", Fila[quant]);	
}

void exibirPrimeiro()	//função de exibição do primeiro elemento
{
	if (quant == -1)
		printf ("\nA fila está vazia!");							
	else 
		printf ("O primeiro elemento da fila e = %d", Fila[0]);		
}

void exibirTudo()		//função de exbição geral
{
	if (quant == -1)
		printf ("\nA fila está vazia!");							
	else 
		for (i = 0; i<= quant; i++)		
			printf ("%d, ", Fila[i]);								
}	

void menu ()	//função de exibição do menu principal do programa
{
	printf ("\n****************MENU***************");
	printf ("\n1- inserir elemento na fila");
	printf ("\n2- remover elemento na fila");
	printf ("\n3- exibir ultimo elemento da fila");		
	printf ("\n4- exibir primeiro elemento da fila");	
	printf ("\n5- exibir a fila inteira");
	printf ("\n****************MENU***************");
	printf ("\nEscolhe uma das opcoes oferecidas: ");
	scanf ("%d", &opcao);
}

void selecao ()	//função de seleção das opcoes apresentadas pela função anterior
{
	switch (opcao)
	{
		case 1: inserirElemento();	//1° operação em relação a fila
			break;
		case 2: removerElemento();	//2° operação em relação a fila
			break;
		case 3: exibirUltimo();		//3° operação em relação a fila
			break;
		case 4: exibirPrimeiro();	//4° operação em relação a fila
			break;
		case 5: exibirTudo();		//5° operação em relação a fila
			break;
		default: printf ("Opcao invalida!");						
			break;
	}
}

int main ()		//função principal da linguagem
{
	int resp;	//declaração de variáveis
	
	do {		//ciclo do while
		menu();
		selecao();
		printf ("\nDeseha continuar a usar o programa: 1 - SIM | 2 - NAO\n"); //saída de dados
		scanf ("%d", &resp);	//entrada de dados
	} while (resp == 1);
	
	return 0;
}







