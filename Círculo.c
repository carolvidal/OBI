#include <stdio.h>

int main () {
	
	float raio, area;
	
	printf("Qual o raio? ");
	
	scanf("%f", &raio);
	
	area = 3.14159 * (raio * raio);
	
	printf("A area do circulo é %f", area);

	return 0;

}
