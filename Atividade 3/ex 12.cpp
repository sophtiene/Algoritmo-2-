#include <stdio.h>
#include <locale.h>

void analise(int valores[]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, valores[3];
	
	printf("---- Análise Menor ou Igual ----\n");
	
	for(i=0; i<3; i++){
		printf("Insira o %d° valor: ", i+1);
		scanf("%d", &valores[i]);
	}
	
	analise(valores);
	
	return 0;
}

void analise(int valores[]){
	if(valores[0] == valores[1] && valores[0] == valores[2]){
		printf("Os três valores são iguais.");
	}
	else{
		if(valores[0] < valores[1]){
			if(valores[0] < valores[2]){
				printf("%d é menor", valores[0]);
			}
			else{
				printf("%d é menor", valores[2]);
			}
		}
		else{
			if(valores[1] < valores[2]){
				printf("%d é menor", valores[1]);
			}
			else{
				printf("%d é menor", valores[2]);
			}
		}
	}
}
