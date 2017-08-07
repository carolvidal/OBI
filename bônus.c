#include <stdio.h>

int main () {
	char nome[20];
    double salFixo, vendas, total;
    
	printf("Qual o nome? ");
	scanf("%s", &nome);
	
	printf("Qual o salario fixo? ");
	scanf("%lf", &salFixo);
	
	printf("Quantas vendas efetuadas? ");
	scanf("%lf", &vendas);
	total = salFixo + (vendas*0.15);
		
	printf("TOTAL = R$ %.2lf", total); 

	return 0;
}
