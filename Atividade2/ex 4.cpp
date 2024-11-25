#include <stdio.h>
#include <locale.h>

int somatorio(int n);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("Insira a quantidade de vezes em que deve repetir o somat�rio: ");
	scanf("%d", &n);
	
	printf("O resultado final do somat�rio repetido %d vezes � igual a %d", n, somatorio(n));
}

int somatorio(int n){
	int i, somatorio=0;
	
	for(i=1; i<= n; i++){
		somatorio = somatorio + (5*i*i+2*i+8);
	}
	
	return somatorio;
}
