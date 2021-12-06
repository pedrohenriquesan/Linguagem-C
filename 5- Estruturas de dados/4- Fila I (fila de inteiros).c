/*Estrutura de dados - acesso aos dados no formato de fila - fila de inteiros
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h>		//inclus�o da biblioteca stdio.h

int Fila[3], opcao, num, quant = -1, i;		//vari�veis globais

void inserirElemento()	//fun��o de inser��o
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

void removerElemento()	//fun��o de remo��o
{
	if (quant == -1)
		printf ("\nA fila j� est� vazia!");							
	else
	{
		num = Fila[0];
		for (i = 0; i <= quant - 1; i++)	
			Fila[i] = Fila[i + 1];
		quant--;
		printf ("\nElemento %d removido com sucesso!", num);		
	}
}

void exibirUltimo()		//fun��o de exibi��o do �ltimo elemento
{
	if (quant == -1)
		printf ("\nA fila est� vazia!");							
	else 
		printf ("O utlimo elemento da fila e = %d", Fila[quant]);	
}

void exibirPrimeiro()	//fun��o de exibi��o do primeiro elemento
{
	if (quant == -1)
		printf ("\nA fila est� vazia!");							
	else 
		printf ("O primeiro elemento da fila e = %d", Fila[0]);		
}

void exibirTudo()		//fun��o de exbi��o geral
{
	if (quant == -1)
		printf ("\nA fila est� vazia!");							
	else 
		for (i = 0; i<= quant; i++)		
			printf ("%d, ", Fila[i]);								
}	

void menu ()	//fun��o de exibi��o do menu principal do programa
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

void selecao ()	//fun��o de sele��o das opcoes apresentadas pela fun��o anterior
{
	switch (opcao)
	{
		case 1: inserirElemento();	//1� opera��o em rela��o a fila
			break;
		case 2: removerElemento();	//2� opera��o em rela��o a fila
			break;
		case 3: exibirUltimo();		//3� opera��o em rela��o a fila
			break;
		case 4: exibirPrimeiro();	//4� opera��o em rela��o a fila
			break;
		case 5: exibirTudo();		//5� opera��o em rela��o a fila
			break;
		default: printf ("Opcao invalida!");						
			break;
	}
}

int main ()		//fun��o principal da linguagem
{
	int resp;	//declara��o de vari�veis
	
	do {		//ciclo do while
		menu();
		selecao();
		printf ("\nDeseha continuar a usar o programa: 1 - SIM | 2 - NAO\n"); //sa�da de dados
		scanf ("%d", &resp);	//entrada de dados
	} while (resp == 1);
	
	return 0;
}







