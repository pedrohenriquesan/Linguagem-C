/*Menu de conversões simples com uso de switch case
Dev: Pedro Henrique Santos Araujo*/

#include <stdio.h> //inclusão da biblioteca de dados stdio.h

int main () //função principal da linguagem
{
	int conversao;											//declaração de variáveis
	float metro, resul1, hora, resul2, quilograma, resul3;  
	
	printf ("\nQuadro de conversoes:");
	printf ("\n|--------------------------|");
	printf ("\n|1 - comprimento (m -> cm) |");
	printf ("\n|2 - tempo (h -> min)      |");      
	printf ("\n|3 - massa (kg -> g)       |");
	printf ("\n|--------------------------|");
	
	printf ("\nSelecione a conversao desejada:\n");         //saída de dados
	scanf ("%d", &conversao);								//entrada de dados
	
	switch (conversao)
	{
		case 1:																		//caso 1 (comprimento)
			printf ("\nInsira o valor em metros que deseja converter: ");
			scanf ("%f", &metro);
			resul1 = metro * 100;
			printf ("\n%0.2f m equivale a %0.2f cm", metro, resul1);
			break;
		case 2:																		//caso 2 (tempo)
			printf ("\nInsira o valor em horas que deseja converter: ");
			scanf ("%f", &hora);
			resul2 = hora * 60;
			printf ("\n%0.2f h equivale a %0.2f min", hora, resul2);
			break;
		case 3:																		//caso 3 (massa)
			printf ("\nInsira o valor em quilogramas que deseja converter: ");
			scanf ("%f", &quilograma);
			resul3 = quilograma * 1000;
			printf ("\n%0.2f kg equivale a %0.2f g", quilograma, resul3);
			break;
		default:																	//mensagem padrão
			printf ("\nOpcao invalida !");
			break;
	}
	
	return 0;
}
