#include <stdio.h>

#define pi 3.14159
float AreaCirculo(float raio);//declarando  a assinatura da função

int main(){
	float r,area;
	printf("Digite o raio (cm): ");
	scanf("%f", &r);
	
	area = AreaCirculo(r);
	
	printf("A area do circulo E : %.3f Cm",area);
	
	return 0;
}

float AreaCirculo(float raio){
	float a;
	a = pi * (raio * raio);
	return a;
}
