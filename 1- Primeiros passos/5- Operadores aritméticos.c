/*vari�veis, operadores aritm�ticos, entrada e sa�da de dados
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca stdio.h e math.h
#include <math.h>  

int main () //fun��o principal da linguagem
{
	int num, num1, soma, sub, multi, div;             //declara��o de vari�veis
	int incremento, decremento, resto, quad, cubo;    
	float raiz;							  			  

	printf ("Escreva um numero: ");       //sa�da de dados 
	scanf ("%i", &num);					  //entrada de dados 
	printf ("Escreva outro numero: ");
	scanf ("%i", &num1);
	
	quad = pow(num,2);    //num^2
	cubo = pow(num,3);    //num^3
	soma = num + num1;    //soma
	sub = num - num1;     //subtra��o
	multi = num * num1;   //multiplica��o
	div = num / num1;     //divis�o
	resto = num % num1;   //resto de divis�o
	incremento = ++num;   //incremento de num
	decremento = --num1;  //decremento de num1
	raiz = sqrt(num);	  //ra�z de num
	
	printf ("\nSoma  = %i", soma);
	printf ("\nSubtracao  = %i", sub);
	printf ("\nProduto  = %i", multi);
	printf ("\nDivisao  = %i", div);
	printf ("\nResto = %i", resto);
	printf ("\nIncremento de %i  = %i", num-1, incremento);
	printf ("\nDecremento de %i  = %i", num1+1, decremento);
	printf ("\nRaiz de %i = %f", num-1, raiz);
	printf ("\n%d^2  = %d", num-1, quad);
	printf ("\n%d^3  = %d", num-1, cubo);	
	
	return 0;
}


