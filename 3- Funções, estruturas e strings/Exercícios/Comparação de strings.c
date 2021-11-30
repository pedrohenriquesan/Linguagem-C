/*Compara��o de strings
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclus�o da biblioteca de dados stdio.h

int main () //fun��o principal da linguagem
{      
	_Bool stringsIguais (char s1[], char s2[]);	//declara��o da fun��o
	
	if (stringsIguais("casa", "casa"))			//estrutura de decis�o
	{
		printf("sao iguais\n");
	} else {
		printf("nao sao iguais\n");
	}
	
	return 0;
}

_Bool stringsIguais (char s1[], char s2[])		//cria��o da fun��o
{
	int i = 0;		
	
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		++i;		//ciclo que determina o fim da string
	}
	
	if(s1[i] == '\0' && s2[i] == '\0')		//estrutura que define se n�o s�o iguais
	{
		return 1;
	} else
		return 0;
}



