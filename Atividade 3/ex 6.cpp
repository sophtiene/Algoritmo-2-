#include <stdio.h>
#include <locale.h>

void exibicaoNumeros(int n);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("---- �mpares Exceto M�ltiplos de 7 ----\n");
	printf("Insira um n�mero para obter a visualiza��o de todos os n�meros �mpares at� este n�mero, exceto os m�ltiplos de 7: ");
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
