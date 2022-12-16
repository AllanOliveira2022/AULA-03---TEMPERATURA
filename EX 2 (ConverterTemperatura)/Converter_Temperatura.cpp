#include <stdio.h>

float celsiusParaFah(float vaC);
float fahParaCelsius(float vaF);
float celsiusParaKel(float vaC);
int main(){
	float temC,temF, converter;
	int condicao;
	printf("Para qual temperatura você deseja converter ? \n");
	printf("0 PARA  C --> F \n");
	printf("1 para F --> C\n");
	printf("2 para C --> K\n");
	scanf("%d", &condicao);
	if (condicao == 0){
		printf("Digite a temperatura em Celsius : ");
		scanf("%f", &temC);
		converter = celsiusParaFah(temC);
		printf("%.1f em Celsius eh %.1f em Fahrenheit ! \n", temC,converter);
		
	}else if(condicao == 1){
		printf("Digite a temperatura em Fahrenheit : ");
		scanf("%f", &temF);	
		converter = fahParaCelsius(temF);
		printf("%.1f em Fahrenheit eh %.1f em Celsius ! \n", temF,converter);	
	}else if(condicao == 2){
		printf("Digite a temperatura em Celsius : ");
		scanf("%f", &temC);	
		converter = celsiusParaKel(temC);	
		printf("%.1f em Celsius eh %.1f em Kelvin ! \n", temF,converter);
	}
	
	
	return 0;
}

float fahParaCelsius(float vaF){
	float c;
	c = (vaF - 32) / 1.8;
	return c;
}
float celsiusParaFah(float vaC){
	float f;
	f = (vaC * 1.8) + 32;
	return f;	
}
float celsiusParaKel(float vaC){
	float k = vaC + 273.15;
	return k;
}

