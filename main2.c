#include <stdio.h>
#include <stdlib.h>
#include <locate.h>
#include <math.h>

int main() {
	setlocate(LC_ALL, "Portuguese")
	double larg, alt, area, totalTinta
	
	printf("Digite a altura da parede, em metros\n");
	scanf("%lf", &alt);
		printf("Digite a largura da parede, em metros\n");
	scanf("%lf", &larg);
	area = larg * alt;
		printf("A area total da parede é%.21f \n", area);
	totalTinta= area/6,66;
	
	double res = ceil(totalTinta);
		printf("A quantidade de latas de tintas necessarias é de é%.21f", res);		
	return 0;
}
