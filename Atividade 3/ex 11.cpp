#include <stdio.h>
#include <locale.h>

void analise(int valores[]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, valores[2];
	
	printf("---- An�lise Maior ou Igual ----\n");
	
	for(i=0; i<2; i++){
		printf("Insira o %d� valor: ", i+1);
		scanf("%d", &valores[i]);
	}
	
	analise(valores);
	
	return 0;
}

void analise(int valores[]){
	if(valores[0] == valores[1]){
		printf("Os dois valores s�o iguais.");
	}
	else{
		if(valores[0] > valores[1]){
			printf("%d � maior", valores[0]);
		}
		else{
			printf("%d � maior", valores[1]);
		}
	}
}
