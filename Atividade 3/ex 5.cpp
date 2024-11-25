#include <stdio.h>
#include <locale.h>

float calculaMedia(float notas[]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	float notas[4];
	float media = 0;
	int i;
	
	printf("---- Calculador de Média para Notas Escolares ----\n");
	
	for(i=0; i<4; i++){
		printf("Insira a %dª nota: ", i+1);
		scanf("%f", &notas[i]);
	}
	
	media = calculaMedia(notas);
	
	printf("A média das notas inseridas é igual a %.2f", media);
	
	return 0;
}

float calculaMedia(float notas[]){
	int i;
	float soma = 0;
	float media = 0;

	for(i=0;i<4;i++){
		soma = soma + notas[i];
	}
	
	media = soma/4.0; 
	
	return media;
}
