#include <stdio.h>	

int main () {
	int num, qtdhora;
    float valhora, sal;
    
	printf("Qual o numero? ");
	scanf("%d", &num);
	
	printf("Qual a quantidade de horas trabalhadas? ");
	scanf("%d", &qtdhora);
	
	printf("Qual o valor da hora? ");
	scanf("%f", &valhora);
	
	printf("NUMBER = %d", num);
	
	sal = qtdhora * valhora;
	printf("SALARY = %.2f", sal);

	return 0;
}
