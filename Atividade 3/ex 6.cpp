#include <stdio.h>
#include <locale.h>

void exibicaoNumeros(int n);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("---- Ímpares Exceto Múltiplos de 7 ----\n");
	printf("Insira um número para obter a visualização de todos os números ímpares até este número, exceto os múltiplos de 7: ");
	scanf("%d", &n);
	
	exibicaoNumeros(n);
	
	return 0;
}

void exibicaoNumeros(int n){
	int i;
	for(i=1; i<=n; i++){
		if(i%2 != 0 && i%7 != 0){
			printf("%d \n", i);
		}
	}
}
