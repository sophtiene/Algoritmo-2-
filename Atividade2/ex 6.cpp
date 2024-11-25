#include <stdio.h>
#include <locale.h>

int verificaMaior(int a, int b);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, maior;
	
	printf("Digitr o primeiro número inteiro: ");
	scanf("%d", &a);
	
	printf("Digite o segundo número inteiro: ");
	scanf("%d", &b);
	
	printf("O maior número é %d", verificaMaior(a,b));
	
	return 0; 
}

int verificaMaior(int a, int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
