#include <stdio.h>
#include <locale.h>

int somar(int n, int valores[]);
int media(int n, int soma);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, i, somaTotal, mediaFinal;
	
	printf("---- Calculador de Média ----\n");
	printf("Insira a quantidade de valores que serão calculados: ");
	scanf("%d", &n);
	
	int valores[n];
	
	for(i=0; i<n; i++){
		printf("Insira o %d° valor: ", i+1);
		scanf("%d", &valores[i]);
	}
	
	somaTotal = somar(n, valores);
	printf("A soma dos valores inseridos é igual a %d \n", somaTotal);
	
	mediaFinal = media(n, somaTotal);
	printf("A média dos valores inseridos é igual a %d", mediaFinal);
	
	return 0;
}

int somar(int n, int valores[]){
	int i, soma=0;
	for(i=0; i<n; i++){
		soma = soma + valores[i];
	}
	return soma;
}

int media(int n, int soma){
	return soma/n;
}
