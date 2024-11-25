
#include <stdio.h>
#include <locale.h>

float calculaMedia(int valores[]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valores[3];
	float media = 0;
	int i;
	
	printf("---- Calculador de Média ----\n");
	
	for(i=0; i<3; i++){
		printf("Insira o %d° valor: ", i+1);
		scanf("%d", &valores[i]);
	}
	
	media = calculaMedia(valores);
	
	printf("A média dos valores inseridos é igual a %.2f", media);
	
	return 0;
}

float calculaMedia(int valores[]){
	int i;
	int soma = 0;
	float media = 0;

	for(i=0;i<4;i++){
		soma = soma + valores[i];
	}
	
	media = soma/3.0; 
	
	return media;
}
