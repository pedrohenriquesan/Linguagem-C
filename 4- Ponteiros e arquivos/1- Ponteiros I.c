/*Introdução à ponteiros
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{      
	int x = 10;						//declaração de variável
	
	int *ponteiro;					//declaração do ponteiro
	ponteiro = &x;					//variável que o ponteiro aponta
	
	printf ("%d\n", *ponteiro); 	//saída de dados (valor)
	printf ("%d\n", ponteiro);		//saída de dados (endereço)
	
	return 0;
}



