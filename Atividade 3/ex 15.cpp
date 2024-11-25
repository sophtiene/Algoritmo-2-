#include <stdio.h>
#include <locale.h>

int calcular(int soma, int primeiro, int ultimo);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valores[10];
	int i, soma=0, resultado=0;
	
	for(i=0; i<10; i++){
		valores[i] = i+1;
		soma = soma + valores[i];
	}
	
	resultado = calcular(soma, valores[0], valores[9]);
	
	printf("---- Calculador ----\n");
	printf("Sabendo que existe um vetor que vai de 1 até 10, o programa faz a seguinte conta: \n");
	printf("Soma de todos os vetores + (Primeiro valor * 5) + (Último valor * 2) \n");
	printf("Dessa forma, o resultado deste cálculo é igual a ---> %d", resultado);
	
	return 0;
}

int calcular(int soma, int primeiro, int ultimo){
	return soma + (primeiro*5) + (ultimo*2);
}
