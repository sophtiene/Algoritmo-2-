#include <stdio.h>
#include <locale.h>

void analise(int valores[]);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, valores[3];
	
	printf("---- An�lise Menor ou Igual ----\n");
	
	for(i=0; i<3; i++){
		printf("Insira o %d� valor: ", i+1);
		scanf("%d", &valores[i]);
	}
	
	analise(valores);
	
	return 0;
}

void analise(int valores[]){
	if(valores[0] == valores[1] && valores[0] == valores[2]){
		printf("Os tr�s valores s�o iguais.");
	}
	else{
		if(valores[0] < valores[1]){
			if(valores[0] < valores[2]){
				printf("%d � menor", valores[0]);
			}
			else{
				printf("%d � menor", valores[2]);
			}
		}
		else{
			if(valores[1] < valores[2]){
				printf("%d � menor", valores[1]);
			}
			else{
				printf("%d � menor", valores[2]);
			}
		}
	}
}
