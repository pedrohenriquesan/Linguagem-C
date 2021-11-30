/*Cálculo salariral de acordo com o setor e o numero de vendas usando switch case e if else
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int setor, vendas;
	float salarioPadrao, salarioFinal, aumento;
	
	printf ("\nEscolha setor que o funcionario(a) atua para calcular seu salario: ");
	scanf ("%d", &setor);
	
	switch (setor)
	{
		case 1:
			printf ("\nDigite o salario padrao para o setor selecionado: ");
			scanf("%f", &salarioPadrao);
			printf ("\nDigite o numero de vendas do funcionario: ");
			scanf ("%d", &vendas);
			printf ("\nO salario normal e de %0.2f e ele(a) fez %d vendas.", salarioPadrao, vendas);
			if (vendas >= 10)
			{
				aumento = 0.1 * salarioPadrao;
				salarioFinal = aumento + salarioPadrao;
				printf ("\nDevido ao numero de vendas, o salario foi acrescido em 10%%, sendo = $%0.2f", salarioFinal);
			} else
				printf ("\nDevido ao numero de vendas, o salario foi mantido, sendo = $%0.2f.", salarioPadrao);
			break;
		case 2:
			printf ("\nDigite o salario padrao para o setor selecionado: ");
			scanf("%f", &salarioPadrao);
			printf ("\nDigite o numero de vendas do funcionario: ");
			scanf ("%d", &vendas);
			printf ("\nO salario normal e de %0.2f e ele(a) fez %d vendas.", salarioPadrao, vendas);
			if (vendas >= 10)
			{
				aumento = 0.15 * salarioPadrao;
				salarioFinal = aumento + salarioPadrao;
				printf ("\nDevido ao numero de vendas, o salario foi acrescido em 15%%, sendo = $%0.2f", salarioFinal);
			} else
				printf ("\nDevido ao numero de vendas, o salario foi mantido, sendo = $%0.2f.", salarioPadrao);
			break;
		case 3:
			printf ("\nDigite o salario padrao para o setor selecionado: ");
			scanf("%f", &salarioPadrao);
			printf ("\nDigite o numero de vendas do funcionario: ");
			scanf ("%d", &vendas);
			printf ("\nO salario normal e de %0.2f e ele(a) fez %d vendas.", salarioPadrao, vendas);
			if (vendas >= 10)
			{
				aumento = 0.2 * salarioPadrao;
				salarioFinal = aumento + salarioPadrao;
				printf ("\nDevido ao numero de vendas, o salario foi acrescido em 20%%, sendo = $%0.2f", salarioFinal);
			} else
				printf ("\nDevido ao numero de vendas, o salario foi mantido, sendo = $%0.2f.", salarioPadrao);
			break;
		default:
			printf ("\nLamento, este setor nao esta disponivel!");
	}
	
	return 0;
}



