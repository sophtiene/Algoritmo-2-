#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	printf("---É PAR, OU ÍMPAR?---\n");
	printf("Insira um número inteiro: ");
	scanf("%d", &num);
	
	if(num%2 == 0){
		printf("%d é um número PAR", num);
	}
	else{
		printf("%d é um número ÍMPAR", num);
	}
	return 0;
}
