#include <stdio.h>
#include <locale.h>

void exibirPares(int n);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("---- Impress�o de N�meros Pares ----\n");
	printf("Insira um n�mero para obter a visualiza��o de todos os n�meros pares at� este: ");
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
