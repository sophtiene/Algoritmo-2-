#include <stdio.h>
#include <locale.h>

int soma(int a, int b);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	
	printf("Digite o primeiro n�mero inteiro: ");
	scanf("%d", &a);
	
	printf("Digite o segundo n�mero inteiro: ");
	scanf("%d", &b);
	
	printf("O resultado de %d + %d � igual a %d", a, b, soma(a,b));
	
	return 0; 
}

int soma(int a, int b){
	return a+b;
}
