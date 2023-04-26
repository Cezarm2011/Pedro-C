#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() { 
	setlocale(LC_ALL, "Portuguese");
	
	double custo, frete, despesas, valorDeVenda, totalBruto, perclucro, lucro;
	
	printf("Digite o valor da mercadoria:\n");
	scanf("%lf", &custo);
	printf("Digite o valor do frete:\n");
	scanf("%lf", &frete);
	printf("Digite o valor da despesas:\n");
	scanf("%lf", &despesas);
	totalBruto=custo+frete+despesas;
	printf("Digite o valor da venda:\n");
	scanf("%lf", &valorDeVenda);
	lucro=valorDeVenda-totalBruto;
	perclucro=(lucro/totalBruto)*100;
	printf("A porcentagen de lucro é: %.21f%%",perclucro);
	
}
