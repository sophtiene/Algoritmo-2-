#include <stdio.h>
#include <locale.h>

void exibirPares(int n);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("---- Impressão de Números Pares ----\n");
	printf("Insira um número para obter a visualização de todos os números pares até este: ");
	scanf("%d", &n);
	
	exibirPares(n);
	
	return 0;
}

void exibirPares(int n){
	int i;
	for(i=1; i<=n; i++){
		if(i%2 == 0){
			printf("%d \n", i);
		}
	}
}
