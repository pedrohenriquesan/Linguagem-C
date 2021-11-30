/*Calculadora b�sica usando a estrutura de decis�o switch case
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{
	float num, num1, resul;  //declara��o de vari�veis
	int op; 				 
	
	printf ("\nEscreva um numero qualquer: ");  //sa�da de dados
	scanf ("%f", &num);						    //entrada de dados
	
	printf ("\nQuando de operacoes:    ");
	printf ("\n|----------------------|");
	printf ("\n|1 - Soma (+)          |");
	printf ("\n|2 - Subtracao (-)     |");      //parte est�tica da interface da calculadora
	printf ("\n|3 - Multiplicacao (*) |");	 
	printf ("\n|4 - Divisao (/)       |");
	printf ("\n|5 - Reaiz quadrada    |");
	printf ("\n|----------------------|");
	printf ("\nEscolha a operacao desejada: "); //sele��o da opera��o
	scanf("%d", &op);							//armazenamento da opera��o escolhida
	
	switch (op)    //estrutura de decis�o switch case
	{
		case 1:                                                 //caso 1
			printf ("\nEscreva outro numero qualquer: ");       //sa�da de dados
			scanf ("%f", &num1);								//entrada de dados
			resul = num + num1;									//opera��o correspondente ao caso
			printf ("\nSeu resultado e = %0.2f", resul);		//sa�da do resultado
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
		default:												//mensagem padr�o
			printf ("\nEssa opera��o n�o est� dispon�vel");
			break;
	}
		
	return 0;
}



