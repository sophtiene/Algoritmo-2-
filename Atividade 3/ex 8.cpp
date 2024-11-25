#include <stdio.h>
#include <locale.h>

void procurarMaior(int n, int valores[]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, i;
	
	printf("---- Buscador de Maior Número ----\n");
	printf("Insira a quantidade de valores que serão inseridos: ");
	scanf("%d", &n);
	
	int valores[n];
	
	for(i=0; i<n; i++){
		printf("Insira o %d° valor: ", i+1);
		scanf("%d", &valores[i]);
	}
	
	procurarMaior(n, valores);

	return 0;
}

void procurarMaior(int n, int valores[]){
	int i, maior = 0, posicao = 0;
	
	for(i=0; i<n; i++){
		if(valores[i]>maior){
			maior = valores[i];
			posicao = i;
		}
	}
	
	printf("O maior número inserido é %d, e sua posição no array é a %d (%d° valor)", maior, posicao, posicao+1);
}
