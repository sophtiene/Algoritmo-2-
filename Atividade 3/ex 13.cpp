#include <stdio.h>
#include <locale.h>

void impressaoInversa(int valores[]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, valores[10];
	
	printf("---- Impressão Inversa ----\n");
	
	for(i=0; i<10; i++){
		printf("Insira o %d° valor: ", i+1);
		scanf("%d", &valores[i]);
	}
	
	impressaoInversa(valores);
	
	return 0;
}

void impressaoInversa(int valores[]){
	int i;
	for(i=9; i>=0; i--){
		printf("%d \n", valores[i]);
	}
}
