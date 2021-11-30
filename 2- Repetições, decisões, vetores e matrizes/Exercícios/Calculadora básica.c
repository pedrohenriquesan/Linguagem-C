/*Calculadora básica usando a estrutura de decisão switch case
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	float num, num1, resul;  //declaração de variáveis
	int op; 				 
	
	printf ("\nEscreva um numero qualquer: ");  //saída de dados
	scanf ("%f", &num);						    //entrada de dados
	
	printf ("\nQuando de operacoes:    ");
	printf ("\n|----------------------|");
	printf ("\n|1 - Soma (+)          |");
	printf ("\n|2 - Subtracao (-)     |");      //parte estética da interface da calculadora
	printf ("\n|3 - Multiplicacao (*) |");	 
	printf ("\n|4 - Divisao (/)       |");
	printf ("\n|5 - Reaiz quadrada    |");
	printf ("\n|----------------------|");
	printf ("\nEscolha a operacao desejada: "); //seleção da operação
	scanf("%d", &op);							//armazenamento da operação escolhida
	
	switch (op)    //estrutura de decisão switch case
	{
		case 1:                                                 //caso 1
			printf ("\nEscreva outro numero qualquer: ");       //saída de dados
			scanf ("%f", &num1);								//entrada de dados
			resul = num + num1;									//operação correspondente ao caso
			printf ("\nSeu resultado e = %0.2f", resul);		//saída do resultado
			break;
		case 2:													//caso 2
			printf ("\nEscreva outro numero qualquer: ");
			scanf ("%f", &num1);
			resul = num - num1;
			printf ("\nSeu resultado e = %0.2f", resul);
			break;
		case 3:													//caso 3													
			printf ("\nEscreva outro numero qualquer: ");
			scanf ("%f", &num1);
			resul = num * num1;
			printf ("\nSeu resultado e = %0.2f", resul);
			break;
		case 4:													//caso 4
			printf ("\nEscreva outro numero qualquer: ");
			scanf ("%f", &num1);
			resul = num / num1;
			printf ("\nSeu resultado e = %0.2f", resul);
			break;
		case 5:													//caso 5
			resul = sqrt(num);
			printf ("\nSeu resultado e = %0.2f", resul);
			break;
		default:												//mensagem padrão
			printf ("\nEssa operação não está disponível");
			break;
	}
		
	return 0;
}



