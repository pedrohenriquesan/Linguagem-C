/*Comparação de strings
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{      
	_Bool stringsIguais (char s1[], char s2[]);	//declaração da função
	
	if (stringsIguais("casa", "casa"))			//estrutura de decisão
	{
		printf("sao iguais\n");
	} else {
		printf("nao sao iguais\n");
	}
	
	return 0;
}

_Bool stringsIguais (char s1[], char s2[])		//criação da função
{
	int i = 0;		
	
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		++i;		//ciclo que determina o fim da string
	}
	
	if(s1[i] == '\0' && s2[i] == '\0')		//estrutura que define se não são iguais
	{
		return 1;
	} else
		return 0;
}



