/*Variáveis local automática e estática
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int gvariavelGlobal = 2;  //declaração de variável global

int main () //função principal da linguagem
{
	void testeVLA (void);      					//declaração da função
	
	printf ("\nGlobal: %d", gvariavelGlobal);   //uso da variável global
			
	testeVLA();
	testeVLA();				   					//chamando a função
	testeVLA();		
		
	return 0;
}

void testeVLA (void)		   //criando a função
{
	int variavelLocalAutomatica = 2;
	variavelLocalAutomatica *= 2;
	
	static int variavelLocalEstatica = 2;
	variavelLocalEstatica *= 2;
	
	gvariavelGlobal *= 2;
	
	printf ("\nLocal automatica: %d", variavelLocalAutomatica);
	printf ("\nLocal estatica: %d", variavelLocalEstatica);
	
	printf ("\nGlobal: %d", gvariavelGlobal);    //uso da variável global
}


