#include <stdio.h>
#include <locale.h>

int somaVetor(int vetor[3]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, vetor[3];
	
	for(i=0;i<3;i++){
		printf("Digite o %dº valor:", i+1);
		scanf("%d", &vetor[i]);
	}
	
	printf("A soma dos valores inseridos é %d", somaVetor(vetor));
	
	return 0; 
}

int somaVetor(int vetor[3]){
	int i, soma=0;
	for(i=0;i<3;i++){
		soma = soma+vetor[i];	
	}
	
	return soma;
}
