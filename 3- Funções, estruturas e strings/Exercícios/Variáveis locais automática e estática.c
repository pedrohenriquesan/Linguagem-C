/*Vari�veis local autom�tica e est�tica
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int gvariavelGlobal = 2;  //declara��o de vari�vel global

int main () //fun��o principal da linguagem
{
	void testeVLA (void);      					//declara��o da fun��o
	
	printf ("\nGlobal: %d", gvariavelGlobal);   //uso da vari�vel global
			
	testeVLA();
	testeVLA();				   					//chamando a fun��o
	testeVLA();		
		
	return 0;
}

void testeVLA (void)		   //criando a fun��o
{
	int variavelLocalAutomatica = 2;
	variavelLocalAutomatica *= 2;
	
	static int variavelLocalEstatica = 2;
	variavelLocalEstatica *= 2;
	
	gvariavelGlobal *= 2;
	
	printf ("\nLocal automatica: %d", variavelLocalAutomatica);
	printf ("\nLocal estatica: %d", variavelLocalEstatica);
	
	printf ("\nGlobal: %d", gvariavelGlobal);    //uso da vari�vel global
}


