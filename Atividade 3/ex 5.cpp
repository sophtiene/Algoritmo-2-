#include <stdio.h>
#include <locale.h>

float calculaMedia(float notas[]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	float notas[4];
	float media = 0;
	int i;
	
	printf("---- Calculador de M�dia para Notas Escolares ----\n");
	
	for(i=0; i<4; i++){
		printf("Insira a %d� nota: ", i+1);
		scanf("%f", &notas[i]);
	}
	
	media = calculaMedia(notas);
	
	printf("A m�dia das notas inseridas � igual a %.2f", media);
	
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
